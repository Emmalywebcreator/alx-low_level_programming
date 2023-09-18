#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: input string
 * Retun: string in the reverse form
 */


void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	i = 0;
	while (i < counter)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;

		i++;
	}
}
