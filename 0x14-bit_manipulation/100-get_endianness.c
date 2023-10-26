#include "main.h"


/**
 * get_endianness - programs that checks the endianness of a system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *prt = (unsigned char *)&num;

	if (*prt == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

