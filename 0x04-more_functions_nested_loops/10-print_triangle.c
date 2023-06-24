#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: parameter for size of triangle
 * Return: Always 0
 */
void print_triangle(int size)
{
	int height, base, X;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 0; height < size; height++)
		{
			for (base = size - height; base > 1; base--)
			{
				_putchar(' ');
			}
			for (X = 0; X <= height; X++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
