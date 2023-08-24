#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to list_t
 * @str: pointer.
 * Return: pointer head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *_new_node;
	unsigned int str_len;

	if (head == NULL)
		return (NULL);

	_new_node = malloc(sizeof(list_t));
	if (_new_node == NULL)
	{
		return (NULL);
	}

	_new_node->str = strdup(str);
	if (_new_node->str == NULL)
	{
		free(_new_node);
		return (NULL);
	}

	for (str_len = 0; str[str_len] != '\0'; str_len++)
		;

	_new_node->len = str_len;
	_new_node->next = *head;
	*head = _new_node;

	return (*head);
}
