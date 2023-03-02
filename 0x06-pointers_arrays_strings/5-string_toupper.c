#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @s:string
 * Return:char
 */
char *string_toupper(char *s)
{

	int j;

j = 0;
	while (*(s + j))
	{
		if (*(s + j) >= 'a' && *(s + j) <= 'z')
			*(s + j) -= 'a' - 'A';
		j++;
	}
	return (s);
}
