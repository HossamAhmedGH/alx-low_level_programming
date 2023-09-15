#include "main.h"

/**
 * _strcmp - compares a string to another.
 * Return: the result.
 * @s1: a pointer.
 * @s2: another pointer.
*/

int _strcmp(char *s1, char *s2)
{
	int a;
	int b;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] > s2[a])
		{
			b = 15;
			break;
		}
		else if (s1[a] < s2[a])
		{
			b = -15;
			break;
		}
		else if (s1[a] == s2[a])
		{
			b = 0;
		}
	}
	return (b);
}

