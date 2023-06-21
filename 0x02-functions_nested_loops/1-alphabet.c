#include "main.h"
/**
 * print_alphabet - writes the character c to stdout
 *
 * @ch: The character to print
 *
 * Return: void
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
