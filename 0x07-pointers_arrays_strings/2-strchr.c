#include "main.h"

/**
 * _strchr - finds the first occurrence
 * @s: pointer to the targetted memory area.
 * @c: the char to look for.
 * Return: pointer to the char or null if it doesn't exist.
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			break;
		}
	}

	if (*s == c)
	{
		return (s);
	}
	return (0);
}

