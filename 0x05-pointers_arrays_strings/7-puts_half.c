#include "main.h"

/**
 * puts_half - puts_half, duh!
 * Return: void.
 * @str: the string to work with.
*/

void puts_half(char *str)
{
	int a; /*counts the length of the string*/
	int b; /*used to print the second half*/

	for (a = 0; str[a] != '\0'; a++)
	{
		;
	}
	if (a % 2 == 0)
	{
		a = a - 1;
	}
	a++;
	for (b = a / 2; b <= a; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}

