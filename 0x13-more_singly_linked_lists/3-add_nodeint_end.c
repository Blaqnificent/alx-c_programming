#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node to the linked list at the end of the list
 * @head: Address of the linked list
 * @n: integer to be added to the new node
 * Return: Address of modified linked list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	current_node = *head;
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	current_node->next = new_node;
	return (*head);
}
