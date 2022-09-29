#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: integer to take factorial o
 *
 * Return: factorial of n, or -l if  n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
