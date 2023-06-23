#include "main.h"
/**
 * _isupper - checks if charcter is upper/lower case
 * @c: designated variable
 * Return: integer
 */
int _isupper(int c);
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

