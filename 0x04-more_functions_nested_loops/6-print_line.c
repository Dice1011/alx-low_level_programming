#include "main.h"
/**
 *print_line - unction prints a straight line
 *@n: parameter 1
 *
 * Return: integer;
 */
void print_line(int n)
{
	int ln;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ln = 1; ln <= n; ln++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

