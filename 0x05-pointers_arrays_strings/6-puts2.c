#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every character of a string by new line
 * @str: the string containing character.
 *
*/

void puts2(char *str)
{
	int i;
	int l;

	while (str[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
