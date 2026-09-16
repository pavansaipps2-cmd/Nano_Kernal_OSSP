#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
    int pid[3];

    for(int i = 0; i < 3; i++)
    {
        pid[i] = fork();

        if(pid[i] == 0)
        {
            printf("Child %d PID = %d\n", i + 1, getpid());
            sleep(i + 1);
            exit(0);
        }
    }

    wait(NULL);
    printf("Parent: One child completed using wait()\n");

    waitpid(pid[2], NULL, 0);
    printf("Parent: Child 3 completed using waitpid()\n");

    wait(NULL);
    printf("Parent: All children completed\n");

    return 0;
}
