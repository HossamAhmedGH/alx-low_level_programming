#include "main.h"

/**
 * _strstr - finds the first occurrence
 * @haystack: pointer to the targetted memory area.
 * @needle: the accepted bytes.
 * Return: no. of bytes from accept
 */

char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;
	char *c;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
		{
			a = haystack;
			b = needle;
			c = haystack;
			while (*b != '\0')
			{
				if (*c == *b)
				{
					b++;
					if (*c != '\0')
					{
					c++;
					}
				}
				else
				{
					break;
				}
			}
			if (*b == '\0')
			{
				return (a);
			}
			else
			{
				b = needle;
			}
		}
	}
	return (0);
}

