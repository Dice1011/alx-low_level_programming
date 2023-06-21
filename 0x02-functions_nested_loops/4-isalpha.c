#include "main.h"

/**
 *_isalpha - function that checks for alphabetic character
 *@a: funtion parameter
 *
 * Description: the function checks for an alphabetic character
 *
 *Return: 1 or alpha character or 0 for other
 */

int _isalpha(int a)
{
	if ((a >= 65 && a <= 97) || (a >= 97 && a <= 122))
	{
		return (1);
	}
	else
		return (0);
}
