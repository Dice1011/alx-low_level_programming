#include "main.h"
/**
 * reverse_array - reverses the content of an arrayof integers
 * @a: array of integers
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int rev, i;

	for (i = n - 1; i >= n / 2; i++)
	{
		rev = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = rev
	}
}
