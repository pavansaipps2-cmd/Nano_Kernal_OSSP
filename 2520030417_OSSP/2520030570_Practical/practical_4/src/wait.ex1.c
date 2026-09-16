#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>  //used for wait() and waitpid() Systemcalls
#include<stdlib.h>    //used for exit() Systemcall

int main(){
int pid[3];   //initializing 3 childs
for(int i=0;i<3;i++){   // loop runs for 3 childs
pid[i] = fork();
if(pid[i]==0)   //creating 3 childs
{
printf("Child %d pid = %d\n",i+1,getpid());
sleep(i+1);  //giving a pause after every child
exit(0);     //exiting the standard input
}
}
wait(NULL);  //waiting for any 1 child
printf("Parent: One child is completed with wait()\n");
waitpid(pid[2],NULL,0);  // waiting using a specific pid
printf("Parent: Child 3 has completed with waitpid()\n");
wait(NULL);   //waiting for the last child to completed
printf("Parent: All the childs are completed\n");  //parent is checking the last child
}
