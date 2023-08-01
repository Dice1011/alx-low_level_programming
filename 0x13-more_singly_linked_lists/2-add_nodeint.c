#include "lists.h"
/**
 *add_nodeint - adds new node to beginning of a lined list
 *@head: Pointer to the first(old) node
 *@n:elements to add
 *Return: Pointer to the new node or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
