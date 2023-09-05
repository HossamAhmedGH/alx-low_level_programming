#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - finds the biggest prime factor.
 * Return: always returns 0.
*/

int main(void)
{
	long int n = 612852475143;
	int x;
	int a = 3;

	while (n % 2 == 0)
	{
		x = 2;
		n = n / 2;
	}
	while (a <= n)
	{
		if (n % a == 0)
		{
			x = a;
			n = n / a;
		}
		a = a + 2;
	}
	printf("%d\n", x);
	return (0);
}

