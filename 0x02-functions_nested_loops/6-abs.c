#include "main.h"

/**
*_abs - computes the absolute value of an ineger
*
*@n: number being computed
*
*Return: Absolute vale of a number or 0
*/

int _abs(int n)
{
	if (n > 0)
	{
		int absval;

		absval = n * -1;
		return (absval);
	}
	else
		return (n);
}
