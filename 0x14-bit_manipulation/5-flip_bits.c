#include <stdio.h>
#include "main.h"

/**
 * flip_bits - this functions flips to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: returns the number of bits fliped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int k, i;

	k = 0;
	result = 1;
	differnce = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (differnce & result))
			k++;
		result <<= 1;
	}

	return (k);
}
