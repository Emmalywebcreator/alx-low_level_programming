#include "main.h"

/**
 * _strchr - finds the location of character in a string
 *
 * @c: character to be located
 * @s: string to be checked
 * return: c
*/



char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);

}
