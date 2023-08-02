#include "lists.h"
/**
 *insert_nodeint_at_index - inserts new node to linked list
 *@head: pointer to first node in list
 *@idx: index where new node be added
 *@n: Data to nsert in node
 *Return: Pointer to new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *old_node = *head;
	listint_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (!new_nde || !head)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; old_node && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = old_node->next;
			old_node->next = new_node;
			return (new_node);
		}
		else
		{
			old_node = old_node->next;
		}
	}
	return (NULL);
}
