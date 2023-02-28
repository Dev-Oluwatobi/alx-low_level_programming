#include "main.h"

/**
 * _puts - this will print strings
 * @str: this is the function parameter
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');

}
