#include "main.h"

/**
 * *_strcpy - copies strings, duh!
 * Return: void.
 * @dest: a pointer.
 * @src: another pointer.
*/

char *_strcpy(char *dest, char *src)
{
	int a;
	int b = 0;

	for (a = 0; ; a++)
	{
		if (src[a] != '\0')
		{
		dest[b] = src[a];
		b++;
		}
		else
		{
		dest[b] = src[a];
		b++;
		break;
		}
	}
	return (dest);
}

