#include "main.h"
/**
 * reverse_array - reverses the content of an arrayof integers
 * @a: array of integers
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int rev, i;

	for (i = 0; i < n--; i++)
	{
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
	}
}
