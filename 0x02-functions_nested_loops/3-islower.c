#include "main.h"

/**
 *_islower - Program checks for lower case character
 *@a: is the function parameter
 *
 * Return: i for lower case and 0 if other
 */

int _islower(int a)
{
	if (a >= 97 && a <= 122)
	{
		return (1);
	}
	else
		return (0);
}
