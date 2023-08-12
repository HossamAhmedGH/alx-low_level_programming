#include <stdio.h>

/**
 * main - prints the alphabet in lowercaseand also then in uppercase,
 * followed by new line
 * Return: Always 0 (true)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
