#include <stdio.h>
/**
 * main - Entry
 * 
 * Description: Size of types of a computer
 *
 * Return: 0 always
 */

int main(void)
{
	char c;
	int i;
	long int j;
	long long int ij;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a int: %lu byte(s)\n", (unsigned long )sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("Size of a long long in: %lu byte(s)\n", (unsigned long)sizeof(ij));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	
	return (0);
}
