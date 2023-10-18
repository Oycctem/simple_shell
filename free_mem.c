#include "shell.h"
/**
 * free_mem - frees the memory assosciated with an array of tokens
 * @tokens: the array of tokens to be freed
 * @num_tokens: a pointer to the number of tokens in the array
 */
void free_mem(char **tokens, int *num_tokens)
{
	int i = 0;

	while (i < *num_tokens)
	{
		free(tokens[i]);
		i++;
	}
	free(tokens);
}
