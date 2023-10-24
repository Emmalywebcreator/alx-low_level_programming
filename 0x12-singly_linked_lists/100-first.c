#include <stdio.h>

void come_first_before_main(void)__attribute__ ((constructor));
/**
 * come_first_before_main - This fumction runs first before main function
 * Return: void
 */

void come_first_before_main(void)
{
	printf("You're beat! and yet. you must allow,\n");
	printf("I bore my house upon my back!\n");
}
