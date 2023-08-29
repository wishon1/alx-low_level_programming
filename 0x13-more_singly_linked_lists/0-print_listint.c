#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer used the access the structure.
 *
 * Return: return the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int counter = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter = counter + 1;
	}
	printf("%d\n", h->n);
	return (counter);
}
