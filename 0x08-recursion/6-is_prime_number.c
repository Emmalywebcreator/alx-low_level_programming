#include "main.h"


/**
 * is_prime_number - checks if an input integer is prime or not
 *
 * @n: integer to check for it's primality
 *
 * Return: 1 if it is prime and 0 if itsn't
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (actual_prime(n, n - 1));
}

/**
 * actual_prime - check if the number is prime using recursive method
 *
 * @n: integer to  check for primality
 * @i: iterator
 *
 * Return: 1 if n is prime and 0 if n is not prime
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	else
		return (actual_prime(n, i - 1));
}
