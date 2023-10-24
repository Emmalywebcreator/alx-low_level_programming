#include "lists.h"
/**
 * listint_len - Returns the number of element in a listint_t linked list
 *
 * @h: Head pointer to the listint_t linked list to be printed
 * Return: The number of node in the list.
 */

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
