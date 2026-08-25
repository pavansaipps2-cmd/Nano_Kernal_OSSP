#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        return 1;
    } 
    else if (pid == 0) {
        printf("Child process created. PID: %d\n", getpid());
        printf("Child exiting immediately to become a zombie...\n");
        exit(0); 
    } 
    else {
        printf("Parent process. PID: %d, Child PID: %d\n", getpid(), pid);
        printf("Parent sleeping for 25 seconds without calling wait()...\n");
        printf("Tip: Run 'ps aux | grep Z' in another terminal right now to see the zombie!\n");
        
        sleep(25);     
        printf("Parent finished sleeping and exits.\n");
    }

    return 0;
}