#include <stdio.h>
#include "main.h"

/**
 *
 * print_alphabet_x10 - This function print 10x the alphabet in
 * lowercase
 *
 * Description: This function prints the lowercase alphabet 10 times
 * iteration separated by a newline character
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
