#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination pointer for memory
 * @src: first pointer to memory area
 * @n: bytes
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0, j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		j++;
	}
	return (dest);
}
