#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print alphabet in lowercase then
 * in upper case
 *
 * Return: 0 always for success
 */

int main(void)
{
	char alphabets = 'a';
	char ALPHABET = 'A';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}

	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');

	return (0);
}
