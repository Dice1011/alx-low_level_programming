#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: characters
 * Return: array of characters
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *Arry;

	if (size == '\0')
	{
		return ('\0');
	}
	Arry = malloc(sizeof(char) *  size);
	if (Arry == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		Arry[i] = c;
	}
	return (Arry);
}