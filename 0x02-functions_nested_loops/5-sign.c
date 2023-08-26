#include "main.h"

/**
 * print_sign - as the name implies..
 * Return: 1 if true and 0 if else.
 * @n: parameter to be measured.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}

