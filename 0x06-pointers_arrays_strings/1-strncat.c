#include "main.h"

/**
 * _strncat - appends a string to another.
 * Return: the result.
 * @dest: a pointer.
 * @src: another pointer.
 * @n: an integer, duh!
*/

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;
	int c;

	for (a = 0; dest[a] != '\0'; a++)
	;

	for (c = 0; src[c] != '\0'; c++)
	;

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	if (c >= n)
	{
		dest[a] = '\0';
	}
	return (dest);
}

