#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: Pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *New_ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		New_ptr = malloc(new_size);
		if (New_ptr == NULL)
		{
			return (NULL);
		}
		return (New_ptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	New_ptr = malloc(new_size);
	if (New_ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		New_ptr[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (New_ptr);
}
