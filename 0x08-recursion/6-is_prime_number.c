#include "main.h"

int prime_number(int n, int i);
/**
 * is_prime_number -  returns 1 if the integer is a prime number, else return 0
 * @n: input a value
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_number(n, n - 1));
}

/**
 * prime_number -  returns 1 if the integer is a prime number, else return 0
 * @n: input a value
 * @i: input a value
 * Return: 0
 */

int prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime_number(n, i - 1));
}
