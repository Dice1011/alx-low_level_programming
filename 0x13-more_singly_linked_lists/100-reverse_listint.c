#include "lists.h"
/**
 *reverse_listint- reverses a linked list
 *@head: pointer to the first node in linked list
 *Return: pointer to first node in a new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = preious;
	return (*head);
}
