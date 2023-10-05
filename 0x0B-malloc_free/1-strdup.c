#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  function returns a pointer to a newly duplicated space
 *
 * @str: string to be duplicate
 *
 * Return: A pointer to the newly allocated duplicated string, or NULL
 *
 */

char *_strdup(char *str)
{
	char *ar;
	int i;
	int r;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	ar = malloc(sizeof(char) * (i + 1));

	if (ar == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		ar[r] = str[r];

	return (ar);
}
