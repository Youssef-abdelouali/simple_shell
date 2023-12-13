# Shell Programming Course

## Introduction

This repository contains materials and exercises for a shell programming course. The course covers fundamental concepts related to process management, file information, environment variables, and more. Below is an overview of key topics and exercises covered in the course.

## Table of Contents

### PID & PPID

Retrieve process IDs using getpid and getppid system calls.

#### Exercises:

1. **Print the PID of the parent process.**
2. **Write a shell script to print the maximum process ID.**

### Command-Line Arguments

Access command-line arguments in the main function.

#### Exercises:

1. **Print all command-line arguments.**
2. **Implement a program that waits for user input.**

### Executing Programs

Use the execve system call to execute another program.

#### Exercises:

1. **Execute the command /bin/ls -l /usr/.**
2. **Implement a super simple shell.**

### Creating Processes

Use the fork system call to create a new child process.

#### Exercises:

1. **Write a program with multiple forked child processes.**
2. **Implement a super simple shell with basic command execution.**

### Process Management

Use the wait system call to wait for child processes to terminate.

#### Exercises:

1. **Implement a program with fork, wait, and execve.**
2. **Enhance the super simple shell to handle command execution and waiting.**

### File Information

Use the stat system call to get file information.

#### Exercises:

1. **Write a program to check the existence of files.**
2. **Implement a program to find a file in the PATH.**

### Environment

Understand how processes inherit and manage environments.

#### Exercises:

1. **Print the environment using main with the third parameter.**
2. **Write functions to work with environment variables.**


