#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase;
 * Return: 0;
 */
int main(void)
{
	int n = 97;
	int i = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (i <= 90)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
