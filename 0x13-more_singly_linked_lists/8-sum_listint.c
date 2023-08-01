#include "lists.h"
/**
 *sum_listint -finds then sum of all data in a linked list
 *@head: the linked list
 *Return: the sum of all elements
 */
int sum_listint(listint_t *head)
{
	listint_t *old_node = head;
	int sum = 0;

	while (old_node)
	{
		sum += old_node->n;
		old_node = old_node->next;
	}
	return (sum);
}
