#include "lists.h"
#include <stdlib.h>


/**
 * get_nodeint_at_index - a function that returns the nth node of a linked list
 * of type listint_t
 * @head: head of the list
 * @index: Node to stop at
 * Return: pointer to the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}

	return (head);
}


