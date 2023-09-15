#include "main.h"

/**
 * _strcat - appends a string to another.
 * Return: the result.
 * @dest: a pointer.
 * @src: another pointer.
*/

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	; /*now a stops before the null character in dest*/

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a + 1] = '\0';
	return (dest);
}

