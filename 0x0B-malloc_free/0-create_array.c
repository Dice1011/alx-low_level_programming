#include "main.h"
#include <stdlib.h>
/**
 * create_array - function creates an array of chars, and initializes it with a specific char
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
	if ( Arry == '\0')
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		Arry[i] = c;
	}
	return(Arry);
}
