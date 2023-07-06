#include "main.h"
/**
 * _puts_recursion - function prints a string followed by a new line
 * @s: pointer to the string
 * Return: Nothing
 */
int _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
