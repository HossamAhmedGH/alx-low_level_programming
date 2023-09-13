#include "main.h"

/**
 * rev_string - revs a string....
 * Return: void.
 * @s: the string to work with.
*/

void rev_string(char *s)
{
	int a;
	int b;
	int c;
	int d = 0;

	for (a = 0; s[a] != '\0'; a++)
	;
	for (b = a - 1; b > (a + 1) / 2; b--)
	{
		c = s[d];
		s[d] = s[b];
		s[b] = c;
		d++;
	}
}

