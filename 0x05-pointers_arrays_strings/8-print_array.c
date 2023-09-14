#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array, duh!
 * Return: void.
 * @a: a pointer.
 * @n: an integer.
*/

void print_array(int *a, int n)
{
	int b; /* the number of the element to be printed */

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b < n - 1)
		printf(", ");
	}
	printf("\n");
}

