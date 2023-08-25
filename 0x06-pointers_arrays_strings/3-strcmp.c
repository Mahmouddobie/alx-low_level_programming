#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 != '0' && *s2 != 0)
	{
		if (*s1 != *s2)
		{
			i = 1;
		}
		s1++;
		s2++;
	}
	if (i == 0)
		return (0);
	else
		return (1);


}
