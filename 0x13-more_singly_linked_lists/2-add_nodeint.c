#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node to a listint_t linked list
 * @head: The current position in the linked list
 * @n: integer to be added to the list
 * Return: Address of the created node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next -= *head;
	*head = new_node;
	return (*head);

}
