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

	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
		{
			a = haystack;
			while (*needle != '\0')
			{
				if (*haystack == *needle)
				{
					needle++;
					haystack++;
				}
			}
			if (*needle == '\0')
			{
				return (a);
			}
		}
	}
	return (0);
}

