#include "main.h"
#include <stdio.h>

int SQRoot(int n, int j);
/**
 *_sqrt_recursion - find squareroot of a natural number
 * @n: natural number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (SQRoot(n, 1));
}
/**
 * SQRoot -calculates square root
 * @n: number to calculate the root of
 * @j: iterate number
 * Return: Square root
 */
int SQRoot(int n, int j)
{
	int root = j * j;

	if (root > n)
	{
		return (-1);
	}
	else if (root == n)
	{
		return (j);
	}
	else
		return (SQRoot(n, j + 1));
}

