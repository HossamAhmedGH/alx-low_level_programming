#include "main.h"

/**
 * cap_string - capitalizes words.
 * Return: pointer to the answer.
 * @s: the string.
*/

char *cap_string(char *s)
{
	int a;
	int b = 0;

	for (a = 0; s[a] != '\0'; a++)
	;

	while (b <= a)
	{
		if ((s[b] >= 'a' && s[b] <= 'z') || (s[b] >= 'A' && s[b] <= 'Z'))
		{
			if (s[b] >= 'a' && s[b] <= 'z')
			{
				s[b] = s[b] - 32;
			}
		}
		b++;
		while ((s[b] >= 'a' && s[b] <= 'z') || (s[b] >= 'A' && s[b] <= 'Z'))
		{
			b++;
		}
		if (s[b] == '\\')
		{
			b += 2;
		}
		else
		{
			b++;
		}
	}
	return (s);
}

