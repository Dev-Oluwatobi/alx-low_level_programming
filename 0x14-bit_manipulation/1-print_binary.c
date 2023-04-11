#include <stdio.h>
#include "main.h"

/**
 * _power - cal (base and power)
 * @base: base of the exponet num
 * @pow: exponet power
 * Return: the value of base and power
 */

unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int k;

	num = 1;
	for (k = 1; k <= pow; k++)
		num *= base;
	return (num);
}

/**
 * print_binary -function that prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
