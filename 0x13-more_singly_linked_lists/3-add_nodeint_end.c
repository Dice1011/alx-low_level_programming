#include "lists.h"
/**
 *add_nodeint_end -adds a new node at the end of a listint_t list
 *@head: Pointer to first element
 *@n: new input to add
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *old_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (old_node->next)
	{
		old_node = old_node->next;
	}

	old_node->next = new_node;

	return (new_node);
}
