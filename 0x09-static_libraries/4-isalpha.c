#include "main.h"

/**
 * _isalpha - checks whether the character is from the alphabet
 * @c: the entry
 * Return: 1 if alpha and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
