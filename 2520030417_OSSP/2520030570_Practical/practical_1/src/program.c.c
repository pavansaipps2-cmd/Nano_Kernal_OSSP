#include<stdio.h>
#include<unistd.h>
int main()
{
char buff[100];
int pid;
printf("Enter Linux command: ");
scanf("%s" ,buff);
pid=fork();
if(pid<0)
{
printf("Fork failed\n");
}
if(pid==0)
{
printf("Child process\n");
printf("Child PID: %d\n", getpid());
printf("Parent PID: %d\n", getppid());
execlp(buff,buff,NULL);
printf("Buffer execution failed\n");
}
else
{
printf("Parent process\n");
printf("Parent PID: %d\n", getpid());
printf("Child PID: %d\n", pid);
printf("Child process completed\n");
}
}