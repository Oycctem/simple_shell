#include "shell.h"
/**
 * make_whole_path - combines a dir path and a cmd path
 * @path: the dir path
 * @cmd: the command
 * Return: returns a string containing the whole path
 */
char *make_whole_path(const char *path, const char *cmd)
{
	char *whole_path;
	unsigned int length;

	length = _strlen(path) + _strlen(cmd) + 2;
	whole_path = malloc(sizeof(char) * length);
	if (whole_path == NULL)
	{
		return (NULL);
	}
	_strcpy(whole_path, path);
	_strcat(whole_path, "/");
	_strcat(whole_path, cmd);
	return (whole_path);
}
