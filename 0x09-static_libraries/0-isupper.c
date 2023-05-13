#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: input a value
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
