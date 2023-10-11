#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each element of an array
 *
 * @array: This the array whose element is to b printed
 *
 * @size: How many element to print
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
