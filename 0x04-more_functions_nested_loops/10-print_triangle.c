#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: parameter for size of triangle
 * Return: Always 0
 */
void print_triangle(int size)
{
	int Y, Z, X;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (Y = 0; size > Y; Y++)
		{
			for (Z = size - Y; Z > 1; Z--)
			{
				_putchar(' ');
			}
			for (X = 0; X <= Y; X++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
