#include "lists.h"

/**
 * print_listint - Function to print the element of a linked list
 * @h: The head pointer of the linked list
 * Return: The size of the list
 */

size_t print_listint(const listint_t *h)
{
	int list_counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		list_counter++;
	}

	return (list_counter);
}
