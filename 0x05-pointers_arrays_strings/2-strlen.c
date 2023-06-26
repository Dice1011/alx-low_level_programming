#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the lenght of a string
 * @str: The string
 * Return: The lenght of @str
 */
int _strlen(const char *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}
	return (len);
}
