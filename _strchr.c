#include "shell.h"
/**
 * _strchr - locate the first character in a string
 * @s: the string being searched
 * @i: the char to find
 * Return: returns a pointer to the first char else NULL
 */
char *_strchr(const char *s, int i)
{
	while (*s != '\0')
	{
		if (*s == i)
		{
			return ((char *)s);
		}
		s++;
	}
	if (i == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
