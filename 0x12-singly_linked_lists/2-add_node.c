#include "lists.h"
int length(const char *ptr);
/**
 * add_node - function that add a node
 * @head: ponter to node
 * @str: string
 * Return: pointer to the newly assigned int
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = length(str);
		*head = new_node;
	}
	return (*head);
}
/**
 * length - get the length of the string.
 * @ptr: pointer to string
 * Return: return lenght as int
 */
int length(const char *ptr)
{
	int counter;

	if (ptr == NULL)
		return (0);

	counter = 0;
	while (ptr[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
