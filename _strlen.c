#include "shell.h"
/**
 * _strlen - calculates the length of a string
 * @s: char
 * Return: returns the length
 */
int _strlen(const char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
