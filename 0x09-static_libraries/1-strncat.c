#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: String to be appended
 * @src: String to be appended to dest
 * @n: number of bytes
 * Return: pointer of resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int lenght = 0;

	while (dest[i++])
	{
		lenght++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[lenght++] = src[i];
	}
	return (dest);
}
