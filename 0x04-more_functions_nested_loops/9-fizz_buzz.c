#include "main.h"
#include <stdio.h>

/**
 * main - prints squares.
 * Return: void.
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", a);
			printf(" ");
		}
	}
	printf("\n");
	return (1);
}

