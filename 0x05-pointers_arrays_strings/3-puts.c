#include "main.h"

/**
 * _puts - _puts something....
 * Return: void.
 * @str: the string to work with.
*/

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}

