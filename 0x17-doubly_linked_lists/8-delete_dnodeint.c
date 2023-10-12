#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node in a specified index
 * @head: is a pointer
 * @index: is an int
 * Return: 1 is it success -1 is not successful
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tem = *head;
	dlistint_t *tem_1 = NULL;
	unsigned int count = 0;

	if (index == 0 && *head != NULL)
	{
		if (tem->next != NULL)
		{
			*head = tem->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;
		free(tem);
		return (1);
	}
	while (tem != NULL)
	{
		if (index == count)
		{
			tem_1->next = tem->next;
			if (tem->next != NULL)
				tem->next->prev = tem_1;
			free(tem);
			return (1);
		}
		tem_1 = tem;
		tem = tem->next;
		count++;
	}
	return (-1);
}

