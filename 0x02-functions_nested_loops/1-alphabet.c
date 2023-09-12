#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: Print the alphabet in lowercase
 * followed by anew line
 *
 * Return: 0 always for success
 */

void print_alphabet(void)
{
	char alphabets = 'a';

	while (alphabetts <= 'z')
	{
		_putchar(alphabets);
		alphabets++;
	}

	_putchar('\n');
}
