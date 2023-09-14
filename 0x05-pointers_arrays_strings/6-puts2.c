#include "main.h"

/**
 * puts2 - prints every other integer....
 * Return: void.
 * @str: the string to work with.
*/

void puts2(char *str)
{
	int a;

	for (a = 0; (str[a] != '\0'); a++)
	{
		if (str[a] % 2 == 0)
		{
		_putchar(str[a]);
		}
	}
	_putchar('\n');
}

