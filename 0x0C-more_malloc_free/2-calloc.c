#include "main.h"
#include <stdlib.h>
/**
 * _calloc -
 * @nmemb:
 * @size:
 * Return:
 */
void *_calloc(unsigned int nmemb, unsigned in size)
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
