#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to the first node.
 *
 * Return: return the sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int num = 0;

	if (head == NULL)
		return (0);

	while (ptr != NULL)
	{
		num = num + ptr->n;
		ptr = ptr->next;
	}
	return (num);
}
