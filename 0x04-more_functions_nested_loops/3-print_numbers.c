#include "main.h"

/**
 * print_numbers - as the name might imply, it actually prints numbers!
 * a new line is added at the end.
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
		{
		_putchar(x);
		}
	_putchar('\n');
}
