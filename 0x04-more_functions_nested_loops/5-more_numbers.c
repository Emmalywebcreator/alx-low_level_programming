#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int x;
	int y;

	x = 0;

	while (x <= 10)
	{
		y = 0;

		while (y <= 14)
		{
			if (y > 9)
			{
				_putchar('1');
			_putchar((y % 10) + '0');
			y++;
			}
		}
		_putchar('\n');
		x++;
	}
}



