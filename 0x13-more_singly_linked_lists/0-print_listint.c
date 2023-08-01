#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - prints elements in a linked list
 * @h:linked list to print
 * Return: Number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}