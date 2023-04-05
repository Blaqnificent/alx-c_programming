#include "lists.h"

/**
* print_listint - prints to stdout all elements of the linked list
* @linkedlist: A Linked list of type listint_t
* Return: Number of nodes in list
*/

size_t print_listint(const listint_t *linkedlist)
{
	size_t count = 0;

	while (linkedlist != 0)
	{
		printf("%d\n", linkedlist->n);
		count++;
		linkedlist = linkedlist->next;
	}

	return (count);
}
