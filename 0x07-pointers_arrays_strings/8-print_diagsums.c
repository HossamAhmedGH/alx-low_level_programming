#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints chessboard.
 * @a: pointer to the targetted memory area.
 * @size: the size of the int.
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	int b;
	int c = 0;
	int d = 0;

	for (b = 0; b < size; b++)
	{
		c = c + *(a + (size * b + b));
		d = d + *(a + (size * b + ((size - 1) - b)));
	}
	printf("%d, ", c);
	printf("%d\n", d);
}

