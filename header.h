#ifndef shell_h
#define shell_h

#define COMMANDS 8

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

void print_prompt(char **env);


#endif
