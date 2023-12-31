#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The set of bytes to be searched for
 *
 * Return: If a set is matched - a pointer to the matched byte
 *		If no set is matched - NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ch;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				ch = &s[i];
				return (ch);
			}
		}

	}

	return (0);
}
