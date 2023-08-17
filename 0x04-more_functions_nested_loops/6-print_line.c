#include "main.h"

/**
 * print_line - a function that prints lines, duh!
 * After that line is printed, a new line is inserted.
 */

void print_line(int n)
{
	for (n = 190; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
