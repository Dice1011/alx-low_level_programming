#include "lists.h"
/**
 *free_listint - frees linked list
 *@head:linked list to be freed
 *
 */
void free_listint(listint_t *head)
{
	listint_t *old_node;

	while (head)
	{
		old_node = head->next;
		free(head);
		head = old_node;
	}
}
