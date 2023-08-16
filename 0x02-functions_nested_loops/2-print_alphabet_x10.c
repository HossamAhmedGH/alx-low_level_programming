#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int nn = 1;

	while (nn <= 10)
		{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		nn++;
		}
}
