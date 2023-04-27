#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @i: input number as a integer
 * Return: last digit
 */
int print_last_digit(int)
{
	int n;

	n = i % 10;
	if (n < 0)
	{
		_putchar(-n + 48);
		return (-n);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
}
