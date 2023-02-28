#include "main.h"

/**
 * puts2 - this function prints alternate character
 * @str: string parameter
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
