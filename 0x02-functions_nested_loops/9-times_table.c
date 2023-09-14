#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			int result = j * i;

			if (j == 0)
			{
				_putchar(result + '0');
			}
			if (result < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if(result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			j++;
		}
		putchar('\n');
		i++;
	}
}
