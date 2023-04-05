#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Linked list to be popped
 * Return: integer value of popped head node
 */


int pop_listint(listint_t **head)
{
	int i;
	listint_t *current_node, temp_node;

	if (*head == NULL)
		return (0);
	current_node = temp_node = *head;

	if (*head != NULL)
	{
		i = current_node->n;
		*head = current_node->next;
		free(temp_node);
	}
	else
		i = 0;

	return (i);
	
}
