#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
    printf("Parent Process (PID: %d) started.\n", getpid());

    pid_t pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    } else if (pid == 0) {
        printf("Child Process (PID: %d) executing command...\n", getpid());
        
        char *args[] = {"ls", "-l", NULL};
        execvp(args[0], args);
        
        perror("Exec failed");
        exit(1);
    } else {
        int status;
        printf("Parent process waiting for child (PID: %d) to finish...\n", pid);
        wait(&status);
        
        if (WIFEXITED(status)) {
            printf("Child exited with status %d\n", WEXITSTATUS(status));
        }
        printf("Parent process finishing.\n");
    }

    return 0;
}