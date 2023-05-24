#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index -index of the first element, which the cmp does not return 0
 * @array: pointer to an array
 * @size: number of elements in the array
 * cmp: pointer to the function
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
