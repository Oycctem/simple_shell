#include "shell.h"
/**
 * command_path_check - check if a command is specified with a path
 * @cmd: the command
 * Return: returns 1 if the command is specified with a path else 0
 */
int command_path_check(const char *cmd)
{
	struct stat st;

	if (_strchr(cmd, '/') != NULL)
	{
		if (stat(cmd, &st) == 0)
		{
			return (1);
		}
	}
	return (0);
}
