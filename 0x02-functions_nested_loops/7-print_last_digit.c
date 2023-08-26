#include "main.h"

/**
 * print_last_digit - the name implies, as always.
 * Return: 0.
 * @n: parameter to be measured.
*/

int print_last_digit(int n)
{
	int a;

	if (n >= 0)
	{
		a = n % 10;
	}
	else
	{
		n = n * -1;
		a = n % 10;
	}
	_putchar('0' + a);
	return (a);
}

