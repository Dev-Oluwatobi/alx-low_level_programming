#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: address of s
 */
char *cap_string(char *s)
{
	int k = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + k))
	{
		if (*(s + k) >= 'a' && *(s + k) <= 'z')
		{
			if (k == 0)
				*(s + k) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s + k - 1))
						*(s + k) -= 'a' - 'A';
				}
			}
		}
		k++;
	}
	return (s);
}
