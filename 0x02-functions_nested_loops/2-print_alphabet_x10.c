#include <stdio.h>
#include "main.h"

/**
 *
 * print_alphabet_x10 - print 10x the alphabet in lowercase 
 * followed by a new line
 *
 */

void print_alphabet_x10(void)
{
	char alpha;
	int x = 0;

	while (x < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
		}

		putchar('\n');
		x++;
	}
}
