#include <stdio.h>

/**
 * main - prints all possible com......
 * Return: zero.
*/

int main(void)
{
	int x = 0;
	int y = x + 1;

	while (x < 10)
	{
		while (y < 10)
		{
			putchar(x + '0');
			putchar(y + '0');
			putchar(',');
			putchar(' ');
			y++;
		}
	x++;
	y = x + 1;
	}
	return (0);
}

