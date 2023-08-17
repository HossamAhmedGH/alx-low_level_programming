#include "main.h"

/**
 * print_numbers - as the name might imply, it actually prints numbers!
 * a new line is added at the end.
 */

void print_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
	_putchar(x);
	x++;
	}
	_putchar('\n');
}
