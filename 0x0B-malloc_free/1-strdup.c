#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: a pointer
 * Return: 0
 */

char *_strdup(char *str)
{
	char *n;
	int i, m = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	n = malloc(sizeof(char) * (i + 1));

	if (n == NULL)
	{
		return (NULL);
	}
	for (m = 0; str[m]; m++)
	{
		n[m] = str[m];
	}
	return (n);
}
