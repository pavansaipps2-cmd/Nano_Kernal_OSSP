# Skill -01: Linux Environment Setup and Process Management

## Aim : 
To set up a Linux development environment and understand basic process management concepts using Linux commands and system calls.

### Part A: Linux Environment Setup

- Install and configure a Linux Virtual Machine.
- Configure GCC for compiling C programs.
- Set up a Git repository.
- Create the required project structure.
- Understand basic Linux shell architecture.
- Create and use an initial Makefile.

### Part B: Process Management

- Understand process abstraction in Linux.
- Create a child process using `fork()`.
- Understand the `exec()` family of system calls.
- Analyze the relationship between parent and child processes.
- View the process hierarchy using `pstree`.
- Trace system calls using `strace`.

## 1. Linux Environment Setup

### Check Linux Version : 

uname -a

Check gcc ---> gcc --version

Using fork()

The fork() system call creates a new child process from the parent process.

Example:

pid = fork();

Common system calls that may be observed include:

fork() – Creates a child process.
execve() – Executes a program.
wait() – Waits for a child process.
read() – Reads data.
write() – Writes data.
close() – Closes a file or resource.
              =