#include "lists.h"
/**
 *find_listint_loop - finds a loop in a linked list
 *@head: pointer to the head of linked list
 *Return:pointer to address f the node where loop begins
 *NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *point1, *point2;

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
			point1 = head;
			while (point1 != point2)
			{
				point1 = point1->next;
				point2 = point2->next;
			}
			return (point1);
		}
		point1 = point1->next;
		point2 = (point2->next)->next;
	}
	return (NULL);
}
