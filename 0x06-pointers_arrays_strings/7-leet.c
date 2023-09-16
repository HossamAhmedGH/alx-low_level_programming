#include "main.h"

/**
 * leet - leets u do something.
 * Return: pointer to the answer.
 * @s: the string.
*/

char *leet(char *s)
{
	int a;
	char b[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char c[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (a = 0; s[a] != '\0'; a++)
	{
		int f = 0;

		while (f < 10)
		{
			if (s[a] == b[f])
			{
				s[a] = c[f];
			}
			f++;
		}
	}
	return (s);
}

