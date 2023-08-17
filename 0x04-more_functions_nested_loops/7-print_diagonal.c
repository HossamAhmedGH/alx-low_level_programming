#include "main.h"

/**
 * print_diagonal - again, the name explains it, READ!
 * @n: the number of lines u want ur diagonal line to be drawn on.
 */

void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar(' ');
		n--;
	}
	_putchar('\\');
	_putchar('\n');
}
