#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of list_t list
 *@h: list_t
 *Return: number of nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}
