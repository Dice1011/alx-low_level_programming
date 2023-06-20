#include "main.h"
/**
 * main - Prints alpahabet in lower case
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
		_putchar('\n');
	}
}
