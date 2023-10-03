#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: number of arguments
 *
 * @argv: Array of arguments
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", *argv);

	(void)argc;

	return (0);
}
