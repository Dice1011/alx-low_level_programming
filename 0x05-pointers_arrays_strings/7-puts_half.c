#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int a, b = 0;

	while (str[b] != '\0')
	{
		b++;
	}
	if (b % 2 == 1)
	{
		a = (b - 1) / 2;
		a += 1;
	}
	else
	{
		a = b / 2;
	}
	for (; a < b; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
