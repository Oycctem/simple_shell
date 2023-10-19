#include "shell.h"
/**
 * getpath - extract the value of the path env variable.
 * Return: retunrs the paht value else NULL.
 */
char *getpath()
{
	int i;

	for (i = 0; environ[i]; i++)
	{
		if (_strncmp(environ[i], "PATH=", 5) == 0)
		{
			return (environ[i] + 5);
		}
	}
	return (NULL);
}
