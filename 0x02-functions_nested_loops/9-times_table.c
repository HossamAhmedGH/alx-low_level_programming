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
				if (b != 9)
				{
					if (b == 0)
					{
					_putchar('0' + c);
					}
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + c);
					}
				}
			}
			else
			{
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar('0' + c / 10);
				_putchar('0' + c % 10);
			}
		}
		_putchar('\n');
	}
}

