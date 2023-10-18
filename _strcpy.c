#include "shell.h"
/**
 * _strcpy - copies the string that src points to
 * @dest: char
 * @src: char
 * Return: returns dest
 */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
