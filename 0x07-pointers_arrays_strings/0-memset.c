#include "main.h"

/**
 * _memset - fills the first n bytes of the memory with b
 * @s: pointer to the targetted memory area.
 * @n: the number of slots to be edited.
 * @b: the constant byte.
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

