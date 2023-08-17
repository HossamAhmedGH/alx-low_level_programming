#include "main.h"

/**
 * _isupper - checks whether the entry is an uppercase character.
 * Return: returns 1 if true and 0 otherwise.
 * @c: the character to be checked.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
