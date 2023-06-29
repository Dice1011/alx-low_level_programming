#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: string to be concatenated
 * @src: source string
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	while (dest[len])
	{
		len++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

