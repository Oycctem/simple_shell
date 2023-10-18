#include "shell.h"
/**
 * matching_path - find the full path for a command in the path env
 * @cmd: the command to locate
 * Return: returns the full path to the command else NULL
 */
char *matching_path(const char *cmd)
{
	const char *paths = getpath();
	char *token, *temporary, *whole_path;
	struct stat st;

	if (command_path_check(cmd))
	{
		return (_strdup(cmd));
	}
	temporary = _strdup(paths);
	token = strtok(temporary, ":");

	while (token)
	{
		whole_path = make_whole_path(token, cmd);
		if (stat(whole_path, &st) == 0)
		{
			free(temporary);
			return (whole_path);
		}
		free(whole_path);
		token = strtok(NULL, ":");
	}
	free(temporary);
	return (NULL);
}
