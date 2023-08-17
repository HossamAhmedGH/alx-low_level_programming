#include "main.h"

/**
 * more_numbers - prints more numbers, obviously!
 * btw, for 10 times and adds a line.
 */
void more_numbers(void)
	{
	int x = 1;

	while (x <= 10)
		{
		int y = 0;

		while (y <= 14)
			{
			if (y >= 10)
				{
				_putchar('1');
				}
			_putchar(y % 10 + '0');
			y++;
			}
		_putchar('\n');
		x++;
		}
	}
