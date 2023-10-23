#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t list.
 * @h: Pointer to the list_t list to be counted.
 *
 * Return: The number of elements (nodes) in the list.
 */
size_t list_len(const list_t *h)
{
	int num;

	for (num = 0; h != NULL; num++)

		h = h->next;

	return (num);
}

