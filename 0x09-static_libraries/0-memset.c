#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: a pointer to a value
 * @b: desired vlue
 * @n: number of byte to be changed
 * Return: change array with new value for n byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
