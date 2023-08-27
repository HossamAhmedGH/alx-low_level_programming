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
	unsigned long d = 0;
	int c = 0;

	while (c < 40)
	{
		f = a + b;
		if ((f <= 4000000) && ((f % 2) == 0))
		{
			d = d + f;
		}
		a = b;
		b = f;
		c++;
	}
	printf("%lu\n", d);
	return (0);
}

