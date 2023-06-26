#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the lenght of a string
 * @str: The string
 * Return: The lenght of @str
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
	{
		len++;
	}
	return (len);
}
