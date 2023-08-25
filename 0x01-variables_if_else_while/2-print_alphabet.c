#include <stdio.h>

/**
 * main - prints alphabet followed by a new line
 * Return: void....
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
