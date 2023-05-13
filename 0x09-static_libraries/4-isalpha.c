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
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
