#include "shell.h"
/**
 * handle_builtin_commands - handles bult-in shell commands
 * @cmd: the command to be handled
 * Return: returns 0 if the command is an exit command else 1
 */
int handle_builtin_commands(char *cmd)
{
	int i = 0;

	if (_strcmp(cmd, "exit") == 0)
	{
		return (0);
	}
	else if (_strcmp(cmd, "end") == 0)
	{
		while (environ[i])
		{
			write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
			write(STDOUT_FILENO, "\n", 1);
			i++;
		}
	}
	return (1);
}
