#include "main.h"
/**
 * _puts -prints a string
 * @str: The string to print
 * Return: vopd
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		puts(*str);
	}
	puts('\n');
}
