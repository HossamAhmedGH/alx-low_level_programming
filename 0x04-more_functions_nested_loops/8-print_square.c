#include "main.h"

/**
 * print_square - prints squares.....
 * @size: the number of squares u need.
 */

void print_square(int size)
{
	int x, y;

	for (x = 0; x > size; x++)
	{
		for (y = 0; y > size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
