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
	int c = 0; /*used to determine the sign*/
	int e; /*increments in the exctarction loop*/
	int the_integer = 0; /*the integer to be saved in the return value*/

	for (a = 0; s[a] != '\0'; a++)
	;
	for (b = 0; b <= a; b++)
	{
		if (s[b] == ';')
		{
			break;
		}
		if (s[b] == '-')
		{
			c++;
		}
	} /*now i have the number of positive and negative signs to use with return*/
	for (e = 0; e <= a; e++)
	{
		if (s[e] == ';')
		{
			break;
		}
		if (s[e] >= '0' && s[e] <= '9')
		{
			if (c % 2 != 0)
			{
			the_integer = (the_integer * 10) - (s[e] - '0');
			}
			else
			{
			the_integer = (the_integer * 10) + (s[e] - '0');
			}
		}
	}
	return (the_integer);
}

