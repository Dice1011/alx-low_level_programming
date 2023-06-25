#include "main.h"
/**
 * print_number -prints an  integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int A = n;

	if (n < 0)
	{
		_putchar('-');
		A = -A;
	}
	if ((A / 10) > 0)
	{
		print_number(A / 10);
	}
	_putchar((A % 10) + '0');
}

