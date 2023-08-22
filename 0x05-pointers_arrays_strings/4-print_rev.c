#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
*/

void print_rev(char *s)
{
	for (int i = s[i] - 1; s[i] > 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
