#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: the string to get the length of.
 *
 * Return: the length of @s.
*/
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	return (l);
}
