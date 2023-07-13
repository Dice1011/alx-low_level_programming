#include "main.h"
#include <stdlib.h>
/**
 * mallc_checked - allocates memry using malloc
 * @b: integer
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}


