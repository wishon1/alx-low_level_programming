#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to iterate through the list.
 * Return: return the lenght of the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count = count + 1;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
