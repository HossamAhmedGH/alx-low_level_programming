#include <stdio.h>

/**
 * main - prints all possible combinations of 3 numbers.
 * Return: zero.
*/

int main(void)
{
	int x = 0;
	int y = x + 1;
	int z = y + 1;

	while (x < 10)
	{
		while (y < 10)
		{
			while (z < 10)
				{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
					if ((x == 7) && (y == 8) && (z == 9))
						{
						break;
						}
					else
						{
						putchar(',');
						putchar(' ');
						}
				z++;
				}
				y++;
				z = y + 1;
		}
		x++;
		y = x + 1;
		z = y + 1;
	}
	putchar('\n');
	return (0);
}

