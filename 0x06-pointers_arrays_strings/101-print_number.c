#include "main.h"

/**
 * print_number - prints a number.
 * Return: void.
 * @n: the integer.
*/

void print_number(int n)
{
	unsigned int h = n;
	int a;
	int b = 0;
	int f;
	int g;

	if (n < 0)
	{
		_putchar('-');
		h = -n;
	}

	a = h;

	while ((a / 10) != 0)
	{
		a = a / 10;
		b++;
	}

	g = b;

	for (f = 0; f <= g; f++)
	{
		int d = 1;
		int e = h;

		while (d <= b)
		{
			e = e / 10;
			d++;
		}
		e = e % 10;
		_putchar(e + '0');
		b--;
	}
}

