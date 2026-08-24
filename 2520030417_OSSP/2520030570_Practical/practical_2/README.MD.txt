Practical-02: File Copy Using System Calls
Aim
To develop a C program that uses the system calls open(), read(), write(), and close() to copy the contents of one file to another.

Description
This practical demonstrates how files are handled in Linux using system calls.

The program opens a source file, reads its contents into a buffer, and writes the contents into another file. After the copying is completed, both files are closed.

System Calls Used
| System Call | | open() | Opens a file | | read() | Reads data from the source file | | write() | Writes data into the destination file | | close() | Closes the opened files |

Program Flow
Source File (b1)
       ↓
     open()
       ↓
     read()
       ↓
    Buffer
       ↓
    write()
       ↓
Destination File (b2)
       ↓
     close()

#compilation
gcc practical2.c
#output
./a.out
