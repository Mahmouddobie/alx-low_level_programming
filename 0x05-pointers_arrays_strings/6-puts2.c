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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			putchar(s[i]);
	}
	putchar('\n');
}
