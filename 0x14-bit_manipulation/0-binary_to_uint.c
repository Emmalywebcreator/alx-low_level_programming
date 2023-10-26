#include "main.h"
/**
 * binary_to_uint - function that convert a binary to integer
 *
 * @b: string to be converted to integer
 * Return: The final value of the unsigned integer or 0 for !'1' or '!0'
 */

unsigned int binary_to_uint(const char *b)
{
	int decimal = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
			return (0);

		decimal = (decimal << 1) + (*b - '0');
		b++;
	}

	return (decimal);
}
