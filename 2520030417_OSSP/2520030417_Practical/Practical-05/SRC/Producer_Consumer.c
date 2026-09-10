#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int pipefd[2], data = 100;
    pipe(pipefd);

    if (fork() == 0) {   // Child: Consumer
        close(pipefd[1]);
        read(pipefd[0], &data, sizeof(data));
        printf("Child consumed: %d\n", data);
        close(pipefd[0]);
    } else {     // Parent: Producer
        close(pipefd[0]);
        printf("Parent produced: %d\n", data);
        write(pipefd[1], &data, sizeof(data));
        close(pipefd[1]);
        wait(NULL);
    }

    return 0;
}





