#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array and sets it to 0
 * @nmemb: number of elements in the array
 * @size: bytes
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *Arry;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	j = nmemb * size;
	Arry = malloc(j);

	if (Arry == NULL)
	{
		return (NULL);
	}
	while (i < j)
	{
		Arry[i] = 0;
		i++;
	}
	return (Arry);
}
