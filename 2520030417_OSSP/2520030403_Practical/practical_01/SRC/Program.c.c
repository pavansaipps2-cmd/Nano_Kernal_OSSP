#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main() {
    char input[256];
    char *args[64];
    
    printf("Enter a Linux command (e.g., ls -l): ");
    if (fgets(input, sizeof(input), stdin) == NULL) return 1;
    input[strcspn(input, "\n")] = 0;

    int i = 0;
    char *token = strtok(input, " ");
    while (token != NULL && i < 63) {
        args[i++] = token;
        token = strtok(NULL, " ");
    }
    args[i] = NULL;

    if (args[0] == NULL) return 1;

    pid_t pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        return 1;
    } else if (pid == 0) {
        printf("\n[Child Process] PID: %d, PPID: %d\n", getpid(), getppid());
        if (execvp(args[0], args) < 0) {
            perror("Execution failed");
            exit(1);
        }
    } else {
        printf("\n[Parent Process] PID: %d, Created Child PID: %d\n", getpid(), pid);
        wait(NULL);
        printf("[Parent Process] Child finished execution.\n");
    }
    return 0;
}