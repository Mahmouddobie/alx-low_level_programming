#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *		which contains a copy of the string given as a parameter
 * @str: the source string
 *
 * Return: return a pointer to the duplicated string
*/
char *_strdup(char *str)
{
	int i, size = 0;
	char *ch;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[size] != '\0'; i++)
		;
	ch = malloc(size * sizeof(*str) + 1);

	if (ch == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			ch[i] = str[i];
	}
	return (ch);
}
