#include "main.h"
#include <stdio.h>
/**
 * main - checks code
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset-to-98(&n);
	printf("n=%d\n", n);
	return (0);
}
