#include "main.h"

/**
 * print_alphabet_x10 - Program prints alphabets 10 times
 *
 * Return: Void
 */

void print_alphabet_x10(void)
{
	char ac;
	int i = 0;

	while (i < 10)
	{
		for (ac = 'a'; ac <= 'z'; ac++)
		{
			_putchar(ac);
		}
		_putchar('\n');
		i++;
	}
}

