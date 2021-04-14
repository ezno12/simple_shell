# Simple Shell

Basic Linux shell implemented with C, using basic system calls and libraries. A shell is simply a program that conveniently allows you to run other programs. Shell is an environment in which we can run our commands, programs, and shell scripts. There are different flavors of a shell, just as there are different flavors of operating systems. Each flavor of shell has its own set of recognized commands and functions.

## Features
* Executing normal Linux commands found in the PATH variable paths.
* Command lines with arguments
* the env built-in, that prints the current environment.
* The internal shell command "exit" which terminates the shell

## Compiling
The shell is written in multiple C files contained in one directory. Thus, normal compiling in terminal will compile the file. For compiling use the following line:

``` c
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

## How It Works

A shell does three main things in its lifetime span:
* __Initialize:__ Read and execute its configuration files. 
* __Interpret:__ Reads commands from stdin and executes them.
* __Terminate:__ Execute any shutdown commands, frees up any memory and terminates.



### Executing & Detecting Commands
Starting processes is the main function of the shell. The fork() system call is the way for a process to get started. When this function is called, the operating system makes a duplicate of the process and starts them both running. The original process is called “parent”, and the new one is called the “child”.  fork() returns 0 to the child process, and it returns to the parent, the process ID number (PID) of its child. This means that the only way for new processes is to start is by an existing one duplicating itself.
Typically, when you want to run a new process, you don’t just want another copy of the same program, you want to run a different program. That’s what the execve() system call is all about. It replaces the current running program with an entirely new one. This means that when you call execve(), the operating system stops your process, loads up the new program, and starts that one in its place. A process never returns from an execve() call, unless there’s an error.
The parent process can continue doing other things, and it can even keep tabs on its children, using the system call wait() and that is the foreground and background concept.



### Logging
Typically, at this step, all what is done is that we log the progress of the shell by logging when processes are terminated, knowing their exact time, exit status and it’s ID. 

