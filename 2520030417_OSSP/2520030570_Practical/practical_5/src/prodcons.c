int fd[2];
int data;
clock_t start,end;
double time_taken;
double efficiency;
pipe(fd);
start=clock();
if(fork()==0) {
close(fd[1]);
printf("Consumer\n");
for(int i=0;i<5;i++) {
read(fd[0],&data,sizeof(data));
printf("Consumed %d \n",data);
}
close(fd[0]);
}
else {
close(fd[0]);
printf("Producer\n");
for(int i=1;i<=5;i++){
data=i*10;
write(fd[1],&data,sizeof(data));
printf("Produced %d\n",data);
}
close(fd[1]);
wait(NULL);
end=clock();
time_taken=(double)(end-start)/CLOCKS_PER_SEC;
efficiency=5/time_taken;
printf("Communication Time is %lf\n",time_taken);
printf("Communication Efficiency is %lf\n",efficiency);
}
}