#include "main.h"
/**
 * puts2 - prints every character in a string
 * @str: string
 * Return: void
 */


void puts2(char *str)
{
	int a, b = 0;

	while (str[b] != '\0')
	{
		b++;
	}
	for (a = 0; a < b; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
