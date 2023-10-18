#include "shell.h"
/**
 * *_strdup - duplicates a string
 * @s: the string
 * Return: returns a pointer to the new duplicate else NULL
 */
char *_strdup(const char *s)
{
	char *new;
	size_t len = 0;
	size_t i;

	if (!s)
	{
		return (NULL);
	}
	while (s[len] != '\0')
	{
		len++;
	}
	new = (char *)malloc((len + 1) * sizeof(char));

	if (!new)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		new[i] = s[i];
	}
	new[len] = '\0';

	return (new);
}
