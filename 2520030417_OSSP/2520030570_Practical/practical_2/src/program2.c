#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd1, fd2;
    char buf[100];
    size_t n;

    fd1 = open("b2", O_RDONLY);
    fd2 = open("b3", O_RDWR);

    printf("Files successfully opened\n");
    printf("%d\n", fd1);
    printf("%d\n", fd2);

    n = read(fd1, buf, 10);
    write(fd2, buf, n);

    close(fd1);
    close(fd2);

    printf("File copied successfully\n");

    return 0;
}