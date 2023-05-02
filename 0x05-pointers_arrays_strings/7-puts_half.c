#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: print string
 * Return: 0
 */

void puts_half(char *str)
{
	int n = 0;
	int i;

	while (str[n] != '\0')
	{
		n++;
	}
	if (n % 2 == 1)
	{
		i = (n - 1) / 2;
		i++;
	}
	else
	{
		i = n / 2;
	}

	for (; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
