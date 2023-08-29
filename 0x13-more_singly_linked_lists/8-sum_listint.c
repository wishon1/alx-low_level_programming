#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: pointer to first node.
 *
 * Return: return the sum of n in the list.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	unsigned int sum;

	if (head == NULL)
		return (0);

	ptr = head;
	sum = 0;
	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
