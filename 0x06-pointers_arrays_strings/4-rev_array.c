#include "main.h"

/**
 * reverse_array - reverses an array integers
 *
 * @a: arry to be reverse
 * @n: number of element in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}




