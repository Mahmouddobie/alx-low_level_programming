#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - function theat print string in reverse.
 *
 * @s: string to print.
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s++);
		putchar(*s);
	}
}
