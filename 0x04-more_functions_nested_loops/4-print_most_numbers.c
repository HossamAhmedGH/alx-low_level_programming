#include "main.h"

/**
 * print_most_numbers - prints a few numbers.
 * except 2 and 4 and adds a new line after.
 */

void print_most_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
		if (x != 2 && x != 4)
		{
		_putchar(x + '0');
		}
	x++;
	}
	_putchar('\n');
}
