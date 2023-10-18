#include "shell.h"
/**
 * _strcmp - function that compares two strings
 * @s1: first char
 * @s2: second char
 * Return: retruns i
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		i = *s1 - *s2;
	return (i);
}
