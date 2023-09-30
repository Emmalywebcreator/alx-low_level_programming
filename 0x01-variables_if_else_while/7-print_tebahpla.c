#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prinnt all alphabet in lower case followed by a new
 * line
 *
 * Return: 0 always for success
 */

int main(void)
{
	char alphabets = 'z';

	while (alphabets >= 'a')
	{
	putchar(alphabets);

	alphabets--;
	}

	putchar('\n');

	return (0);
}
