#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase, following by a newline.
 *
 * Return: 0 (success)
*/

void print_alphabet(void)
{
	int let;

	for (let = 'a'; let <= 'z'; let++)
		_putchar(let);

	_putchar('\n');
}
