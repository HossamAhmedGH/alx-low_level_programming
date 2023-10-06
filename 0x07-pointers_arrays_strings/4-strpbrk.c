#include "main.h"

/**
 * _strpbrk - finds the first occurrence
 * @s: pointer to the targetted memory area.
 * @accept: the accepted bytes.
 * Return: no. of bytes from accept
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	for (; *s != '\0'; s++)
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
	}
	return (0);
}

