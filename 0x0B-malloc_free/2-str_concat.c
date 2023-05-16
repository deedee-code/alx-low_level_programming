#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: input a string
 * @s2: input a string
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *n;

	int i, m;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = m = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[m] != '\0')
	{
		m++;
	}
	n = malloc(sizeof(char) * (i + m + 1));

	if (n == NULL)
	{
		return (NULL);
	}
	i = m = 0;

	while (s1[i] != '\0')
	{
		n[i] = s1[i];
		i++;
	}
	while (s2[m] != '\0')
	{
		n[i] = s2[m];
		i++, m++;
	}
	n[i] = '\0';
	return (n);
}
