#include "main.h"

/**
 * string_toupper - makes all letters in a string uppercase.
 * Return: pointer to the answer.
 * @c: the string.
*/

char *string_toupper(char *c)
{
	int a;

	for (a = 0; c[a] != '\0'; a++)
	;

	while (a >= 0)
	{
		if (c[a] >= 'a' && c[a] <= 'z')
		{
			c[a] = c[a] - 32;
		}
		a--;
	}
	return (c);
}

