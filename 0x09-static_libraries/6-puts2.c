#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int length = 0;
	int T = 0;
	char*y = str;
	int  rev;

	while (*y != '\0')
	{
		y++;
		length++;
	}

	T = length - 1;

	for (rev = 0; rev <= T; rev++)
	{
		if (rev % 2 == 0)
	{
	_putchar(str[rev]);
	}
	}
	_putchar('\n');
}	
