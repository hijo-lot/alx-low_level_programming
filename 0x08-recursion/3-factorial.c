#include "main.h"

/**
 * factorial - Computes the factorial of a number
 * @n: Number to compute the factorial of
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

