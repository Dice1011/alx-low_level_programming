#include <stdio.h>

/**
 * main - Script prints both upper and lower case alphabets
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar (c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar (c);
	}
	putchar ('\n');
	return (0);
}
