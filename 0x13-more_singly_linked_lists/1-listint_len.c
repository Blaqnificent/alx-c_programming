#include "lists.h"

/**
 * listint_len - Prints the length of a listint_t linked list
 * @h: linked list of listint_t type
 * Return: Length of the given linkedlist
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
