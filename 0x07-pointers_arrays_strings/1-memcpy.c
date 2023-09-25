#include "main.h"

/**
 * _memcpy - Copies n bytes from  memory area
 * @src: Source from which memory is being copied
 * @dest: Destination where memory is copied to
 * @n: Number of byte to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
		return (dest);
}
