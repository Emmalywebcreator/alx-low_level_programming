#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program print the last digit stored in a variable n
 *
 * Return: 0 always for success
 */

int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	k = n % 10;
	printf("Last digit of %d is %d ", n, k);
	if (k > 5)
		printf("and is greater than 5\n");
	else if (k == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
