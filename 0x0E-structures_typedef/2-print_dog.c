#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prinyts dog info
 * @d: dogs information
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name : "(nil)");
		printf("Age: %f\n", d->age : "(nil)");
		printf("Owner: %s\n", d->owner : "(nil)");
	}
}
