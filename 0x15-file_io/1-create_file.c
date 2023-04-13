#include "main.h"

/**
 * create_file - this function creates an array of char.
 *
 * @text_content: NULL terminated string
 * @filename: file name to be created
 *
 * Return: 1 if success, -1 on unsucessful
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
