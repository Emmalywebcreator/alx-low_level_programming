#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * Description: This programs prinnt all alphabet in lower case followed  * a new line
 *
 *
 * return: 0 always for success
 */
int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}

	putchar('\n');
	return 0;
}
