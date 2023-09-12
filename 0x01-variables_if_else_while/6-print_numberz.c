#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all single digit number in base 10 using putchar
 *
 * Return: 0 always for success
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}

	putchar('\n');

	return (0);
}
