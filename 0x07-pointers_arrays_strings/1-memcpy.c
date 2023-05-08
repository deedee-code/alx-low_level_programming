#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: memory area that is was stored
 * @src: memory area it was copied from
 * @n: number of byte
 * Return: copied memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
