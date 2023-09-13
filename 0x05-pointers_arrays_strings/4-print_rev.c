#include "main.h"

/**
 * print_rev - revs something....
 * Return: void.
 * @s: the string to work with.
*/

void print_rev(char *s)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
		;
	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}

