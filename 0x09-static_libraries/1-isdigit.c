#include "main.h"
/**
 * _isdigit - checks if character is a digit
 * @c: variable to be checked
 * Return: 1 if is a digit, else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
