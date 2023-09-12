#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: print_alphabet in lowercase
 * followed by anew line
 *
 * Return: 0 always for success
 */

void print_alphabet(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}

	putchar('\n');
}
