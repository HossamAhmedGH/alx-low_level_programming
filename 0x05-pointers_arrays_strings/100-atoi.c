#include "main.h"

/**
 * _atoi - copies strings, duh!
 * Return: void.
 * @s: a pointer.
*/

int _atoi(char *s)
{
	int a; /*length of the string*/
	int b; /*used to increment until the end of the string*/
	int c = 0; /*number of positive signs*/
	int d = 0; /*number of negative signs*/
	int e; /*increments in the exctarction loop*/
	int the_integer = 0; /*the integer to be saved in the return value*/

	for (a = 0; s[a] != '\0'; a++)
	;
	for (b = 0; b <= a; b++)
	{
		if (s[b] == '+') /*for the positive sign*/
		{
			c++;
		}
		else if (s[b] == '-') /*for the negative sign*/
		{
			d++;
		}
	} /*now i have the number of positive and negative signs to use with return*/
	for (e = 0; e <= a; e++)
	{
		if (s[e] >= '0' && s[e] <= '9')
		{
			the_integer = (the_integer * 10) + (s[e] - '0');
		}
	}
	if (d > c)
	{
		return (-the_integer);
	}
	else
	{
		return (the_integer);
	}
}

