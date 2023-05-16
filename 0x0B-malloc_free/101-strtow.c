#include "main.h"
#include <stdlib.h>

/**
 * letter_words - numbers of words
 * @s: string
 * Return: 0
 */

char letter_words(char *s)
{
	int c, i, n;

	c = 0;
	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			c = 0;
		}
		else if (c == 0)
		{
			c = 1;
			n++;
		}
	}
	return (n);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)

{
	char **matrix, *tmp;

	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
	{
		len++;
	}
	words = letter_words(str);

	if (words == 0)
	{
		return (NULL);
	}
	matrix = (char **) malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
				{
					*tmp++ = str[start++];
				}
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}
