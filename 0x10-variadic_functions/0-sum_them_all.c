#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -  function returns the sum of all its parameters.
 * @n: number of parameters
 * Return: sum of parameters or 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list var;
	unsigned int i, sum = 0;

	va_start(var, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(var, int);
	}
	va_end(var);
	return (sum);
}
