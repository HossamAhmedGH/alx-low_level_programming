#include "main.h"

/**
 * _strspn - finds the first occurrence
 * @s: pointer to the targetted memory area.
 * @accept: the accepted bytes.
 * Return: no. of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	char *b;

	for (; *s != '\0'; s++)
	{
		b = accept;
		while (*b != '\0')
		{
			if (*s == *b)
			{
				a++;
				break;
			}
			b++;
		}
		if (*b == '\0')
		{
			return (a);
		}
	}
	return (a);
}

