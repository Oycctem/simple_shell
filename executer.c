#include "shell.h"
/**
 * executer - executes a command in a child process
 * @cmd: the array of cmds and args
 * @name: program's name
 * @num_tokens: pointer to the number of tokens in the command
 * @buffer: the buffer used for input
 * Return: returns 0 if the commands was executed else 1
 */
int executer(char **cmd, char *name, int *num_tokens, char *buffer)
{
	int pid, status;
	char *whole_path;

	whole_path = matching_path(cmd[0]);
	if (!whole_path)
	{
		perror(name);
		free_mem(cmd, num_tokens);
		free(whole_path);
		return (1);
	}
	pid = fork();
	if (pid == -1)
	{
		perror("fork");
	}
	else if (pid == 0)
	{
		if (execve(whole_path, cmd, environ) == -1)
		{
			perror("execve");
			free(buffer);
			free_mem(cmd, num_tokens);
		}
	}
	else
	{
		waitpid(pid, &status, 0);
		free_mem(cmd, num_tokens);
		free(whole_path);
	}
	return (0);
}
