#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers;
 * @a: integer input a to be swapped;
 * @b: integer input b to be swapped;
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
