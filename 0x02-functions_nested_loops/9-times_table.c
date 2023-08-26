#include "main.h"

/**
 * times_table - bs.
 * Return: void.
 *
*/

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int c = a * b;

			if (c <= 9)
			{
				_putchar('0' + c);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + c / 10);
				_putchar('0' + c % 10);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

