#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: Character to be check
 *
 * Return: if c is an alphabet, return 1 otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);

	}
	else
	{
		return(0);
	}

}
