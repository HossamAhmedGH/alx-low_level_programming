#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - don't care.
 * Return: 0.
 *
*/

int main(void)
{
	int a = 0;
	int b = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b = b + a;
		}
		a++;
	}
	printf("The sum of the natural numbers before 1024 is: %d \n", b);
	return (0);
}

