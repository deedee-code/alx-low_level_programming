#include <stdio.h>

/**
 * _strlen - returns the length of a string;
 * @s: length of the string
 * Return: 0
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
