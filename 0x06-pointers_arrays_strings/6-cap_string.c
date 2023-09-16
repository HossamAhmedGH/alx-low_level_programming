#include "main.h"

/**
 * cap_string - capitalizes words.
 * Return: pointer to the answer.
 * @s: the string.
*/

char *cap_string(char *s)
{
	char sep[13] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};
	int b = 0;

	if (s[b] >= 'a' && s[b] <= 'z')
	{
		s[b] = s[b] - 32;
	}
		b++;

	for (b = 1; s[b] != '\0'; b++)
	{
		if (s[b] >= 'a' && s[b] <= 'z')
		{
			int a = 0;

			while (a < 13)
			{
				if (s[b - 1] == sep[a])
				{
					s[b] = s[b] - 32;
				}
				a++;
			}
		}
	}
	return (s);
}

