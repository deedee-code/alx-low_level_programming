#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - concatenates all the arguments
 * @ac: input a value
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, n, c = 0, s = 0;

	char *str;

	if ((ac == 0) || (av == NULL))
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			s++;
	}
	s += ac;

	str = malloc(sizeof(char) * s + 1);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[c] = av[i][n];
		c++;
		}
		if (str[c] == '\0')
		{
			str[c++] = '\n';
		}
	}
	return (str);
}
