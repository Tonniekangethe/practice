#include <stdlib.h>
#include "simpleshell.h"

/**
 * _strdup - a function that duplicates a string
 * @str: parameter
 *
 * Return: the string duplicated
 */
char *_strdup(char *str)
{
	char *s;
	int i, n = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
	{
		n++;
	}
	s = malloc((sizeof(char) * n) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		s[i] = str[i];
	}
	s[n] = '\0';
	return (s);
}
