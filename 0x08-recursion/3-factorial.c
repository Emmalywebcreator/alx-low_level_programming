#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 *
 * @n: number to find its factorial
 *
 * Return: 0 for success
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
