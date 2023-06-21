#include <unistd.h>
/**
 *main - writes the character c to std output
 *
 *Return: Always 1 (Success)
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}

