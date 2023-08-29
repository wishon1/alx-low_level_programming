#include "lists.h"
/**
 * free_listint - free a list
 * @head: pointer to the first list
 */
void free_listint(listint_t *head)
{
	listint_t *current_node = head;
	listint_t *next_node;

	while (current_node->next != NULL)
	{
		/** save the next node before free the current node */
		next_node = current_node->next;

		/** free the current node */
		free(current_node);

		/** move to the next node */
		current_node = next_node;
	}
}
