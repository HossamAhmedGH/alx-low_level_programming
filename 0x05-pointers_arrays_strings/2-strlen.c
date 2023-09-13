#include "main.h"

/**
 * _strlen - don't care....
 * Return: void.
 * @s: the char to be checked.
*/

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

