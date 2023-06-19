#include <stdio.h>
/**
 * main - Program prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == 9)
				continue;
		}
		putchar ((i % 10) + '0');
		putchar ((j % 10) + '0');
		putchar (',');
		putchar (' ');
	}
	putchar ('\n');
	return (0);
}
