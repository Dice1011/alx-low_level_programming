#include "main.h"
/**
 * _isupper - checks if charcter is upper/lower case
 * @c: designated variable
 * Return: integer
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

