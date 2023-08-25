#include <stdio.h>

/**
 * main - prints alphabet followed by a new line
 * Return: void....
*/

void main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
