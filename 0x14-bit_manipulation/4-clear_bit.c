#include <stdio.h>
#include "main.h"

/**
 * clear_bit - this sets the value of a bit to 0
 * @n: num of i
 * @index: 0 of the bit you want to set
 * Return: returns 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = ~(1 << index);
	*n = *n & k;

	return (1);
}
