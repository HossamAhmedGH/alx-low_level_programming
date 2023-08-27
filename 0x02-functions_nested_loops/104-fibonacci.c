#include <stdio.h>
#include <stdlib.h>

/**
 * main - don't care.
 * Return: 0.
 *
*/

int main(void)
{
	unsigned long f;
	unsigned long a = 0;
	unsigned long b = 1;
	int c = 0;

	while (c < 98)
	{
		f = a + b;
		printf("%lu", f);
		if (c != 97)
		{
			printf(", ");
		}
		a = b;
		b = f;
		c++;
	}
	printf("\n");
	return (0);
}

