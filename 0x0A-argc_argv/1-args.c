#include <stdio.h>

/**
 * main - prints the number of arguments passed to a program
 *
 * @argc: number of arguments
 *
 * @argv: Array of the arguments
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	(void)argv;

	return (0);

}
