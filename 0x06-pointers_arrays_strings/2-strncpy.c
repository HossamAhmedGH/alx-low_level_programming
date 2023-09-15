#include "main.h"

/**
 * _strncpy - copies a string to another.
 * Return: the result.
 * @dest: a pointer.
 * @src: another pointer.
 * @n: an integer, duh!
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a;
	int b;
	int c;

	for (a = 0; src[a] != '\0'; a++)
	;
	a++;

	for (b = 0; dest[b] != '\0'; b++)
	;

	for (c = 0; c < n && c <= a; c++)
	{
		if (c > a)
		{
			dest[c] = '\0';
		}
		dest[c] = src[c];
	}
	return (dest);
}

