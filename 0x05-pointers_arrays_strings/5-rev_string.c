#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string.
 * @s: the string to be reversed.
*/

void rev_string(char *s)
{
	int length;
	int i = length / 2;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
		;

	for (i = 0; i < length; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
