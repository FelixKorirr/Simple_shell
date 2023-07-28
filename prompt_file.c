#include "header.h"


void print_prompt(char **env)
{

	char *lineptr = NULL;
	int y, wstatus;
	size_t n = 0;
	__ssize_t getline_value;
	char *argv[COMMANDS];
	pid_t child_pid;

	while(2)
	{

		write(STDOUT_FILENO, "cisfun$ ", 8);

		getline_value = getline(&lineptr, &n, stdin);

		if(getline_value == -1)
		{
			perror("memory allocation error!");
			free(lineptr);
			exit(EXIT_FAILURE);
		}

		if(lineptr[getline_value - 1] == '\n')
			lineptr[getline_value -1] = '\0';

		y = 0;
		argv[y] = strtok(lineptr, " ");

		while(argv[y])
		{
			y++;
			argv[y] = strtok(NULL, " ");
		}

		child_pid = fork();

		if(child_pid == -1)
		{
			free(lineptr);
			exit(EXIT_FAILURE);
		}

		else if(child_pid == 0)
		{
			if(execve(argv[0], argv, env) == -1)
				perror("./hsh ");
		}

		else
		{
			wait(&wstatus);
		}
	}
}
