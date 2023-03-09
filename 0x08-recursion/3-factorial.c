#include "main.h"

/**
 * factorial - function to be printed
 * @n: interger to be printed
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
