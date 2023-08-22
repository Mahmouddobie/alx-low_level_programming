#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string.
 * @s: the string to be reversed.
*/

void rev_string(char *s)
{
	int length;
	int middle = length / 2;
	char temp;

	for (int i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}







}
