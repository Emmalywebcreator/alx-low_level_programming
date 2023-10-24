#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list to be freed.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		if (temp->str != NULL)
			free(temp->str);

		free(temp);
	}
}
