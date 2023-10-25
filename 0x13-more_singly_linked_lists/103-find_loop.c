#include "lists.h"

/**
 *find_listint_loop - function that finds the loop in a linked list.
 *@head: A pointer to the head of the list
 *Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *here = head;

	while (tortoise != NULL && here != NULL && here->next != NULL)
	{

		tortoise = tortoise->next;

		here = here->next->next;
		if (tortoise == here)
		{

			tortoise = here;


			while (tortoise != here)
			{
				tortoise = tortoise->next;
				here = here->next;
			}

			return (tortoise);
		}
	}
	return (NULL);
}
