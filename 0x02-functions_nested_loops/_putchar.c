#include "main.h"
#include <unistd.h>
/**
 *main - writes the character A to std output
 *
 *Return: Always 1 (Success)
 */

int _putchar(char A)
{
	return(write(1, &A, 1));
}

