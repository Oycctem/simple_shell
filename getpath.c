#include "shell.h"
/**
 * getpath - extract the value of the path env varibale
 * Return: returns the path value else NULL
 */
char *getpath()
{
	int i;
	const char *prefix = "PATH=";

	for (i = 0; environ[i]; i++)
	{
		if (_strncmp(environ[i], prefix, _strlen(prefix)) == 0)
		{
			return (environ[i] + _strlen(prefix));
		}
	}
return (NULL);
}
