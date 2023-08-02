#include "lists.h"
#include <stdio.h>

size_t loop_list_len(const listint_t *head);
size_t print_list_safe(const listint_t *head);
/**
 *loop_list_len - counts unique nodes in a linked list
 *@head: Pointer to the linked list
 *Return: numer of node or 0 if list is not looped
 */
size_t loop_list_len(const listint_t *head)
{
	const listint_t *point1, *point2;
	size_t i = 1;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}
	point1 = head->next;
	point2 = (head->next)->next;
	while (point2)
	{
		if (point1 == point2)
		{
			point1 = point2;
			while (point1 != point2)
			{
				i++;
				point1 = point1->next;
				point2 = point2->next;
			}
			point1 = point1->next;
			while (point1 != point2)
			{
				i++;
				point1 = point1->next;
			}
			return (i);
		}
		point1 = point1->next;
		point2 = (point2->next)->next;
	}
	return (0);
}
/**
 * print_list_safe - prints a linked list safely
 * @head: Pointer to the head of the linked list
 * Return: number of nodes in the list
 */
size_t print_list_safe(const listint_t *head)
{
	size_t i = 0, j;

	j = loop_list_len(head);
	if (j == 0)
	{
		for (; head != NULL; j++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i; i < j; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (j);
}
