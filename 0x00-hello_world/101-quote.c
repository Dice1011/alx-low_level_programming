#include <stdio.h>

/**
 * main - Program prints a string
 *
 * Description : Prgram uses the write function to print STD output
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char sentance[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, sentance, 59);
	return (1);
}
