#include "main.h"
/**
 * _memset - function fills memory with a constant byte
 * @s: Pointer to memory
 * @b: constant byte
 * @n: bytes
 * Return: pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return(s);
}
