#include "shell.h"
/**
 * free_mem - frees the memory assosciated with an array of tokens
 * @tokens: the array of tokens to be freed
 * @num_tokens: a pointer to the number of tokens in the array
 */
void free_mem(char **token, int *num_tokens)
{
	int i;

	for (i = 0; i < *num_tokens; i++)
	{
		free(token[i]);
		token[i] = NULL;
	}
	free(token);
}
