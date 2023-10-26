#include "main.h"

/**
 * print_binary - Convert a binary to it decimal representation
 *
 * @n: An unsigned long integer
 *
 * return 0 for succes
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) ? '1' : '0');
}
