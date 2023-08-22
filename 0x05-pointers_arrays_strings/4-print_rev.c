#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
*/

void print_rev(char *s)
{
	while (*s != '\0')
	{
		putchar(*s + 0);
		s--;

	}
	putchar('\n');
}
