#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	int underscore;
	if (n <= 0)
		_putchar('\n');

	else
	{
		underscore = 1;

		while (underscore <= n)
		{
			_putchar('_');
			underscore++;
			
		}
		_putchar('\n');
	}
}

