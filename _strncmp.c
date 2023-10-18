#include "shell.h"
/**
 * _strncmp - compares two strings up to a specified length
 * @s1: first string
 * @s2: second string
 * @i: max number of chars
 * Return: returns 0 if the two strings are equal
 */
int _strncmp(const char *s1, const char *s2, size_t i)
{
	while (i > 0 && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		i--;
	}
	if (i == 0)
	{
		return (0);
	}
	return (*s1 - *s2);
}
