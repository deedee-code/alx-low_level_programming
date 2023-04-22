#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 start from 0 with putchar;
 * Return: 0;
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
