#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - This function print a name
 * @name: The name to be printed
 * @f: function pointer
 * Return: void
 */


void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

