#include "main.h"

/**
 * _strlen - return the lenght of string
 * @s: string to be printed
 *Return: lenght of counted string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
