#include "main.h"
/**
 * print_number - prints numbers char
 * @n: parameter
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	unsigned int num;

	num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
