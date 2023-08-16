#include "main.h"

/**
 * print_sign - prints the sign of the int
 * @n: the entr int
 * Return: returns a value depending on the int's sign
 */

int print_sign(int n)
{
	{
	if (n > 0)
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
