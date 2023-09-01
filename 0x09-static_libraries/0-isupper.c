#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: int to check
 *
 * Return: 0 it's not uppercase or 1 it's
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

