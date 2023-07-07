#include "main.h"
/**
 * _strncpy - copies at most the inputted number of bytes from src to dest
 * @dest: the  buffer storing the string
 * @src: the source string
 * @n: number of bytes
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (src[i++])
	{
		len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = len; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
