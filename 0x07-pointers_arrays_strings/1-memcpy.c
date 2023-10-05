#include "main.h"

/**
 * _memcpy - copies the first n bytes of the memory
 * @src: pointer to the targetted memory area.
 * @n: the number of slots to be edited.
 * @dest: the destination.
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}

