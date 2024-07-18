#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element in the array
 * @size: Number of element in the array
 * @value: The target element to be search for
 * Return: value was found at index or -1 if value
 * not found or if the array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, curr, prev;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	step = sqrt(size);
	prev = 0;
	curr = 0;

	while (curr < size && array[curr] < value)
	{
		printf("Value checked at array[%li] = [%i]\n", curr, array[curr]);
		prev = curr;
		curr += step;
	}
	printf("Value found betwwen indexes [%li] and [%li]\n", prev, curr);

	curr = curr < size ? curr : size - 1;

	while (prev <= curr)
	{
		printf("Value checked at array[%li] = [%i]\n", prev, array[prev]);
		if (array[prev] == value)
		{
			return (prev);
		}
		prev++;
	}
	return (-1);

}
