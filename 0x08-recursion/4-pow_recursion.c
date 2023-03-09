#include "main.h"

/**
 * _pow_recursion - parameter that returns the value of raised exponent
 * @x: base variable
 * @y: exponent variable
 * Return: value of the raised exponent
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
