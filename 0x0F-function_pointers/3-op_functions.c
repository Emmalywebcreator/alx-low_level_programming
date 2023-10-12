#include <stdio.h>

/**
 * op_add - sum operation
 * op_sub - subtraction operation
 * op_mul - multiplication operation
 * op_div - division operation
 * op_mod - modulus operation
 * @a: first integer
 * @b: second integer
 * Return: 0 always for success
 */


int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}

