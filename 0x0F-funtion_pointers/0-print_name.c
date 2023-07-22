#include "function_pointers.h"
/**
 * print_name - program prints name
 * @name: name
 * @f: pointer to name
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
