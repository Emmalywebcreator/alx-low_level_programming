#include "main.h"

/**
 * _strncpy _ This function copy a string
 * @dest: destination string
 * @src: sourcd string
 * @n: number of byte to copy
 * Return: dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int s2;

	s2 = 0;
	while (src[2] != '\0' && s2 < n)
	{
		dest[s2] = src[s1];
		s2++;
	}

	while (j < n)
	{
		dest[s2] = '\0',
			j++;
	}

	return (dest);
}

