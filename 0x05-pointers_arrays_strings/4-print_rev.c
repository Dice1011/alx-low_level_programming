#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: the string
 * Return: void;
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i = 1; i >= 0; c--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

