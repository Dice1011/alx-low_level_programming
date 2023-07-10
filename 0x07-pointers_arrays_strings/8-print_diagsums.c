#include "main.h"
/**
 * print_diagsums- prints the diagonal sum of numbers
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, j, sumA = 0, sumB = 0;

	for (i = 0; i <= (size * size) i += size + 1)
	{
		sumA += a[i];
	}
	for (j = size - 1; j <= (size * size) - size; j += size - 1)
	{
		sumB += a[j];
	}
	printf("%d, %d\n", sumA, sumB);
}
