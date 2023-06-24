#include "main.h"
/**
 * print_diagonal - function draws diagonal line
 * @n: parameter 1
 * Return: integer
 */
void print_diagonal(int n)
{
	int slash, spc;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (slash = 1; slash < n; slash++)
		{
			for (spc = 1; spc < slash; spc++)
			{
				_putchar(' ');
			}
		
			_putchar(92);
			_putchar('\n');
		}
	}
}
