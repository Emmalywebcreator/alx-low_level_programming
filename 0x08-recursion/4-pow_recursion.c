#include "main.h"

/**
 * _pow_recursion - Returns the x^y
 *
 * @y: exponent integer
 * @x: Base integer.
 *
 * Return: Resul.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
