#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptrS;
	unsigned int i = 0, j = 0, L1 = 0, L2 = 0;

	while (s1 && s1[L1])
		L1++;
	while (s2 && s2[L2])
		L2++;

	if (n < L2)
		ptrS = malloc(sizeof(char) * (L1 + n + 1));
	else
		ptrS = malloc(sizeof(char) * (L1 + L2 + 1));

	if (ptrS == NULL)
		return (NULL);

	while (i < L1)
	{
		ptrS[i] = s1[i];
		i++;
	}

	while (n < L2 && i < (L1 + n))
		ptrS[i++] = s2[j++];

	while (n >= L2 && i < (L1 + L2))
		ptrS[i++] = s2[j++];

	ptrS[i] = '\0';

	return (ptrS);
}

