#include "main.h"
/**
 * factorial - funtion returns the factorial of a given number
 * @n: given number
 * Return: integer value
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
