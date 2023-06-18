#include <stdio.h>
/**
 * main - Script prints all alphabets excerpt q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' || c != 'q')
		{
			putchar (c);
		}
	}
	putchar ('\n');
	return (0);
}
