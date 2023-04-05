#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - Frees up space on the heap and assigns the head to NULL
 * @head: Pointer to address of arg linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_list, *current_list;

	if (head == NULL)
		return;
	current_list = *head;
	while (current_list != NULL)
	{
		temp_list = current_list;
		current_list = current_list->next;
		free(temp_list);
	}
	*head = NULL;
}
