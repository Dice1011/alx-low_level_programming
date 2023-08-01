#include "lists.h"
/**
 * free_listint - frees linked list
 * @head: pointer to linked list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *old_node;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		old_node = (*head)->next;
		free(head);
		*head = old_node;
	}
	*head = NULL;
}
