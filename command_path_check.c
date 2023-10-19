#include "shell.h"
/**
 * command_path_check - check if a command is specified with a path.
 * @cmd: the command.
 * Return: returns 1 if the command is specified with a path else 0
 */
int command_path_check(const char *cmd)
{
	int i = 0;
	struct stat st;

	while (cmd[i])
	{
		if (cmd[i] == '/')
		{
			if (stat(cmd, &st) == 0)
			return (1);
		}
		i++;
	}
	return (0);
}
