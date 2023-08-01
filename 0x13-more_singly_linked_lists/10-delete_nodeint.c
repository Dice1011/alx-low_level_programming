#include "lists.h"
/**
 *delete_nodeint_at_index - deletes node in a linked list
 *@head: pointer to first element in list
 *@index: index of node t delete
 *Return: 1 if (Success) or -1 if (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old_node = *head;
	listint_t *current_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(old_node);
		return (-1);
	}

	while (i < index - 1)
	{
		if (!old_node || !old_node->next)
		{
			return (-1);
		}
		old_node = old_node->next;
		i++;
	}

	current_node = old_node->next;
	old_node->next = current_node->next;
	free(current_node);

	return (1);
}
