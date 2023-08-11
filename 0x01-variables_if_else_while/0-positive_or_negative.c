#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to the var n
 * executes it and prints it
 * Return: gives 0 when correct and ends the function
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("The number is %d and it's positive", n);
	else if (n == 0)
		printf("The number is %d, zilch, nada", n);
	else if (n < 0)
		printf("The number is %d and it's negative", n);
	return (0);
}
