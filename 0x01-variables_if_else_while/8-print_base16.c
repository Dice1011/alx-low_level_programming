#include <stdio.h>
/**
 * main - program prints all the numbers of base 16 in lowercase
 *
 * Return: A;ways 0 (Success)
 */

int main(void)
{
	char ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
