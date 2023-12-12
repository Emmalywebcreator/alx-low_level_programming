#include "main.h"

/**
 * _strlen - This function returns the length o a string
 *
 * @s: string to be returned
 * Return: length od string
 */

int _strlen(char *s)
{
	int L = 0;

	while (*s != '\0')
	{
		L++;
		s++;
	}

	return (L);
}
