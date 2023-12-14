# Shell Programming Guide

## Table of Contents
- [Introduction](#introduction)
- [PID & PPID](#pid--ppid)
  - [getpid Example](#getpid-example)
  - [Exercises](#exercises)
- [Arguments](#arguments)
  - [Exercises](#exercises-1)
- [Read Line](#read-line)
  - [Example](#example)
  - [Advanced](#advanced)
- [Command Line to Arguments Vector](#command-line-to-arguments-vector)
  - [Advanced](#advanced-1)
- [Executing a Program](#executing-a-program)
  - [execve Example](#execve-example)
- [Creating Processes](#creating-processes)
  - [fork Example](#fork-example)
- [Wait](#wait)
  - [wait Example](#wait-example)
  - [Exercises](#exercises-2)
- [Super Simple Shell](#super-simple-shell)
- [File Information](#file-information)
  - [stat Example](#stat-example)
  - [Exercise: Find a File in the PATH](#exercise-find-a-file-in-the-path)
- [Environment](#environment)
  - [Accessing Environment](#accessing-environment)
  - [Exercises](#exercises-3)

## Introduction

This guide provides an overview of shell programming concepts and exercises to help you understand and practice various aspects of shell scripting.

## PID & PPID

A process is an instance of an executing program with a unique process ID (PID). The parent process ID (PPID) indicates the process that created it.

### getpid Example

```c
#include <stdio.h>
#include <unistd.h>

int main(void) {
    pid_t my_pid = getpid();
    printf("%u\n", my_pid);
    return 0;
}

