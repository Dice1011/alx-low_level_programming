#include "lists.h"
#include <stdio.h>
/**
 *list_len - function calculates the number of elements in a linked list_t list
 *@h:memory allocated string
 *Return: number of element in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
