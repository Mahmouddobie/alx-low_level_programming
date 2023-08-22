#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
*/

void print_rev(char *s)
{
	for (int i = 0; s[i]; s--)
	{
		i++;
	}
	putchar('\n');
}
