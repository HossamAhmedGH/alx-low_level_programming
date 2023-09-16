#include "main.h"

/**
 * reverse_array - reversed a string.
 * Return: void.
 * @a: a pointer.
 * @n: an integer.
*/

void reverse_array(int *a, int n)
{
	int d;
	int e;
	int c = n - 1;

	for (d = 0; d < (n + 2) / 2; d++)
	{
		e = a[d];
		a[d] = a[c];
		a[c] = e;
		c--;
	}
}

