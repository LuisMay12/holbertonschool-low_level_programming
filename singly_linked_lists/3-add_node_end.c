#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * str_len - Calculates the length of a string
 * @s: The input string
 *
 * Return: The length of the string
 */
unsigned int str_len(const char *s)
{
	unsigned int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Pointer to the pointer to the head of the list
 * @str: String to duplicate and store in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (!head || !str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = str_len(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
