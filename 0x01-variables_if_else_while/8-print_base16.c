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
	char HEX;

	for (HEX = '0'; HEX <= '9'; HEX++)
	{
		putchar(HEX);
        }

	for (HEX = 'a'; HEX <= 'f'; HEX++)
	{
		putchar(HEX);
	}
	putchar('\n');

	return (0);
}
