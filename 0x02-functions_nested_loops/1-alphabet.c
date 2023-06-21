#include "main.h"
/**
 * main - Prints alpahabet in lower case
 *
 * Return: Void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
		_putchar('\n');
	}
}
