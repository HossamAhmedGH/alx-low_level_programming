#include "main.h"

/**
 * print_numbers - as the name might imply, it actually prints numbers!
 * a new line is added at the end.
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
