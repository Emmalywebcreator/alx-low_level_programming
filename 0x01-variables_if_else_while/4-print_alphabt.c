#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print alphabets in lowecase except 'e' and 'q'
 *
 * Return: 0 always for success
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
			{
				if (alphabet == 'e' || alphabet == 'q')
				continue;
			}

		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
