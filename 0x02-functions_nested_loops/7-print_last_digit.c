#include "main.h"
/**
 * print_last_digit - function prints the last digit of a number
 * @num: number to be treated
 * Return: value of the last digit
 */

int print_last_line(int num)
{
	int laDigit;

	laDigit = num % 10;
	if (laDigit < 0)
	{
		laDigit = ladigit * -1;
	}
	_putchar(laDigit + '0');
	return (laDigit);
}

