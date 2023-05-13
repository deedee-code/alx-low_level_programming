#include "main.h"
/**
 * _islower - check for lowercase character
 *
 * @c: The character in ASCII code
 * Return: 1 for  lowercae charactr. 0 for the rest.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
