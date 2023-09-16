#include "main.h"

/**
 * rot13 - rots in 13 seconds, put in the fridge.
 * Return: pointer to the answer.
 * @s: the string.
*/

char *rot13(char *s)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		int d = 0;

		while (a[d] != '\0')
		{
			if (s[c] == a[d])
			{
				s[c] = b[d];
				break;
			}
			d++;
		}
	}
	return (s);
}

