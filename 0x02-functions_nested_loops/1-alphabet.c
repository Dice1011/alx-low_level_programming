#include "main.h"
/**
 * print_alphabet - writes the character to stdout
 *
 * Description: print_alphabet prints char inlower case
 *
 * @A: The character to print
 *
 * Return: void
 */

void print_alphabet(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
		_putchar(A);

	_putchar('\n');
}
