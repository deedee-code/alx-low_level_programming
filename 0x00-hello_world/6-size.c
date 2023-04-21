#include <stdio.h>
/**
 * main - print the size of various types on the computer
 * Return: 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	
	printf("Size of a char: %e byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a int: %e byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a char: %e byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a char: %e byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a char: %e byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}