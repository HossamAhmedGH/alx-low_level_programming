#include "main.h"

/**
 * print_last_digit - the name implies, as always.
 * Return: 0.
 * @n: parameter to be measured.
*/

int print_last_digit(int n)
{
	int a = n % 10;
	int b = -n % 10;

	if (n >= 0)
	{
		_putchar('0' + a);
		return (a);
	}
	else
	{
		_putchar('0' + b);
		return (b);
	}
}

