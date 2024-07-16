#include <stdio.h>
#include "search_algos.h"

/**
 * linear search: This function iterate through an array finding
 * the first occurrence of a value in th interger array
 *
 * @array: A pointer to the first element of the  array
 * @size: The number of element in the array
 * @value: The value to be search for
 * Return: The first index where value is found, or -1 if value not found
 * or the array is NULL.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i  < size - 1; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}

	}
	return (-1);
}
