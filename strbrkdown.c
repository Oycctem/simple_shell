#include "shell.h"
/**
 * strbrkdown - tokenizes a command string and returns an array of tokens
 * @cmd: the command string to be tokenized
 * @num_tokens: a pounter to the int to store the number of tokens
 * Return: An array of tokens else NULL
 */
char **strbrkdown(char *cmd, int *num_tokens)
{
	int i = 0;
	char *token, *temporary, **tokens;

	*num_tokens = token_counter(cmd);

	if (*num_tokens == 0)
	{
		return (NULL);
	}
	tokens = (char **)malloc(sizeof(char *) * (*num_tokens + 1));
	if (!tokens)
	{
		return (NULL);
	}
	tokens[*num_tokens] = NULL;

	temporary = strdup(cmd);
	token = strtok(temporary, DELIM);

	while (token)
	{
		tokens[i] = strdup(token);
		if (!tokens[i])
		{
			free(temporary);
			free(tokens);
			return (NULL);
		}
		token = strtok(NULL, DELIM);
		i++;
	}
	free(temporary);
	return (tokens);
}
