#include "lists.h"
/**
 *get_nodeint_at_index - returns node at certain index in the linked list
 *@head: node in linked list
 *@index: index of node to return
 *Return: Node or Null if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *old_node = head;

	while (old_node && i < index)
	{
		old_node = old_node->next;
		i++;
	}
	return (old_node ? ld_node : NULL);
}
