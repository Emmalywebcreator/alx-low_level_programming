#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Concatenate s1 and s2 together
 * @s1: input string 1
 * @s2: input string 2
 * Return: pointer to concanated string or null if failed
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenate;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; (s1[i] != '\0'); i++)

	for (j = 0; (s2[j] != '\0'); j++)

	concatenate = malloc(sizeof(char) * (i + j + 1));

	if (concatenate == NULL)

		return (NULL);

	i = j = 0;

	while (s1[i] != '\0')
	{

		concatenate[i] = s1[i];
			i++;
	}

	while (s2[j] != '\0')
	{
		concatenate[i] = s2[j];
			i++, j++;
	}
		concatenate[i] = '\0';
		return (concatenate);
}
