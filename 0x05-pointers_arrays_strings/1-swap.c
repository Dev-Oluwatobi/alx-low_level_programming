#include "main.h"

/**
 * swap_int - swap two values
 * @a: value 1
 * @b: value 2
 * Return: return is insignificant
 */

void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
