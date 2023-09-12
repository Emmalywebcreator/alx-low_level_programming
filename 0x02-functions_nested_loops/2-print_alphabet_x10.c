#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet_x10 - This function print 10x the alphabet in 
 * lowercase
 *
 * Return: 0
 *
 */

void print_alphabet_x10(void)
{
	char alpha;
	int x = 0;

	while (x <= 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
		}

		putchar('\n');
		x++;
	}
}
