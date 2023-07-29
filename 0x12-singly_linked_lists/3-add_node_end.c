#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Adds new node to the end of a linked list
 * @head: Double pointer to list_t list
 * @str: String to add to new node
 * Return: Address to the new added element or NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *old = *head;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (old->next)
	{
		old = new->next;
	}
	old->next = new;
	return (new);
}
