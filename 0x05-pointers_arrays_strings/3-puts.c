#include "main.h"

/**
 * _puts - prints a string, then by a new line, to stdout
 * @str: print string
 * Return: 0
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
