#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees up space
 * @head: Address of lintint_t linked list
 */



void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
