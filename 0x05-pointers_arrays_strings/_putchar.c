#include <unistd.h>

/**
 * _putchar - writes the main function
 * @c: char to be printed
 * Return: 1 when successful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
