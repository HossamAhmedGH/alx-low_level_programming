#include "main.h"

/**
 * print_diagonal - prints a diagonal, duh!
 * Return: void.
 * @n: number of times the slash is printed
*/

void print_diagonal(int n)
{
		int a;
		int b;

		for (a = 1; a <= n; a++)
		{
			for (b = 1; b < a; b++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
}

