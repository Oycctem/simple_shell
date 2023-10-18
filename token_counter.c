#include "shell.h"
/**
 * token_counter - counts the number of tokens in a command string
 * @cmd: the command
 * Return: returns the number of tokens in the command
 */
int token_counter(const char *cmd)
{
	int counter = 0;
	char *tokcpy = strdup(cmd);
	char *token = strtok(tokcpy, DELIM);

	while (token)
	{
		counter++;
		token = strtok(NULL, DELIM);
	}
	free(tokcpy);
	return (counter);
}
