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

	for (i = 0; i <= 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
