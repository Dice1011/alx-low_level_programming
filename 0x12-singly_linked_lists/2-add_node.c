#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function adds a new node at the beginning of a list_t list
 *@head: Original linked list
 *@str: new string added to node
 *Return: Address to the new list or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
