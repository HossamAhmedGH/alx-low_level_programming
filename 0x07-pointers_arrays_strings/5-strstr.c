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
			while (*b != '\0')
			{
				if (*haystack == *b)
				{
					b++;
					if (*haystack != '\0')
					{
					haystack++;
					}
				}
			}
			if (*b == '\0')
			{
				return (a);
			}
		}
	}
	return (0);
}

