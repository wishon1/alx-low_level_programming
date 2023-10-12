#include"lists.h"
/**
 * insert_dnodeint_at_index - insert an element in a specified index
 * @h: is a pointer
 * @idx: is an int
 * @n: is an int
 * Return: the address of the new element
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tem = *h;
	dlistint_t *tem_1 = NULL;
	unsigned int count = 0;

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0 && *h != NULL)
	{
		new->next = tem;
		tem->prev = new;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	while (temp != NULL)
	{
		if (count == idx)
		{
			tem_1->next = new;
			new->prev = tem_1;
			new->next = tem;
			tem->prev = new;
			return (new);
		}
		tem_1 = tem;
		tem = tem->next;
		count++;
	}
	free(new);
	return (NULL);
}
