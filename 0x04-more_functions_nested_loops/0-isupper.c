#include "main.h"
/**
 * _isupper - checks if charcter is upper
 * @c: designated variable
 * Return: 1 if upper 0 if else
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}

