#include "main.h"
#include <stdio.h>

/**
 * print_sign(int n) - print the sign of number
 *
 * Return: + if n > 0, - if n < 0 and 0 if n == 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
