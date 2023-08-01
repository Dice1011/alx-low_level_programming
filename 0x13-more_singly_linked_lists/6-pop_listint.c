#include "lists.h"
/**
 *pop_listint - Deletes the head node of the linked list
 *@head: Pointer to the first element in linked list
 *Return: Data inside th deleted elements or 0 for empty list
 */
int pop_listint(listint_t **head)
{
	listint_t = old_node;
	int i;

	if (!head || !*head)
	{
		return (0);
	}
	i = (*head)->n;
	old_node = (*head)->next;
	free(*head);
	*head = old_node;

	return (i);
}
