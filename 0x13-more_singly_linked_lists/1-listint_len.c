#include "lists.h"
/**
 *listint_len - counts the number of elements in the linked list
 *@h: linked list to count
 *Return: Number of nodes
 */
size_t listint_len(const listint_t *h);
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
