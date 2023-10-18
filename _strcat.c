#include "shell.h"
/**
 * _strcat - function that concatenats two strings
 * @dest: char
 * @src: char
 * Return: returns 0
 */
char *_strcat(char *dest, const char *src)
{
	int i = 0;
	int n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
