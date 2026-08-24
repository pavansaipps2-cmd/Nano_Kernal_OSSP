Practical-01: Linux Process Creation and Command Execution
Aim
To develop a C program that accepts a Linux command from the user and executes it using process creation and system calls.

Problem Statement
The program should:

Accept a Linux command as input.
Create a child process using fork().
Execute the command in the child process using execlp().
Make the parent process wait for the child using wait().
Display the PID of both the parent and child processes.
Description
In this practical, we understand how Linux creates and manages processes.

First, the program asks the user to enter a Linux command. The fork() system call is then used to create a child process. The child process executes the entered command using execlp().

The parent process uses wait() to wait until the child process completes its execution. The getpid() function is used to display the Process ID (PID) of the parent and child processes.

Functions Used
fork() – Creates a child process.
execlp() – Executes the given Linux command.
wait() – Makes the parent wait for the child process.
getpid() – Gets the PID of the current process.
Compilation
gcc practical1.c

## OUTPUT
./a.out
