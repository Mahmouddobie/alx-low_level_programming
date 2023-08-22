#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string to stdout followed by new line.
 * @str: the string to be printed.
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
