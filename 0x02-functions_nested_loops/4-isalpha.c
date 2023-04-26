#include "main.h"
/**
 * _isalpha - show 1 if the outut
 * is a letter, lowercase or uppercase. Otherwise return 0
 *
 * @c: The character is in ASCII code
 * Return: 1 for is a letter, lowercase or uppercase. 0 for the rest
 */
int _isalpha(int c)
{
	for ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
