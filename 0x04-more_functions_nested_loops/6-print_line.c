#include "main.h"

/**
 * print_line - a function that prints lines, duh!
 * After that line is printed, a new line is inserted.
 * @n: the number of repetitions for the underscore.
 */

void print_line(int n)
{
	for (n = n; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
