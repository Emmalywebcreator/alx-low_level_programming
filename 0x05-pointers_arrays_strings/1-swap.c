#include "main.h"

/**
 * swap_int - A function that swap the value of two integers
 * @a: first integer to be swap
 * @b: second interger to be swap
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
