#include "main.h"
/**
 * _strlen_recursion - Prints the length of a string
 *
 * @s: string to return its length
 *
 * Return: 0 for success
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len = (len + _strlen_recursion(s + 1));
	}
	return (len);
}
