#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char num;

	num = '0';

	while (num <= '9')
	{
		if (num == '2' && num == '4')
		{
		       continue;
		}
		else
		{
			_putchar(num);
		}
		num++;
	}
	_putchar('\n');
}


