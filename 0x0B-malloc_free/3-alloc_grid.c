#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: input the width
 * @height: input the height
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **s;

	int i, n;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(int *) * height);

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			for (; i >= 0; i--)
				free(s[i]);
			free(s);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (n = 0; n < width; n++)
			s[i][n] = 0;
	}
	return (s);
}
