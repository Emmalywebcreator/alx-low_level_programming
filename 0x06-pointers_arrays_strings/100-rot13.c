#include "main.h"
#include <stdio.h>

/**
 * rot13 - This function encodes string into rot13
 *
 * @s: pointer
 *
 * Return: *s
 */
char *rot13(char *s)
{
	int i;
	int j;

	char alpha[] = 
	"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char Drot = 
	"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = Drot[j];

				break;
			}
		}
	}
	return (s);
}

