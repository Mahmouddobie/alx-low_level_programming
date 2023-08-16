#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: 0 (success)
*/

void print_alphabet_x10(void)
{

	int line, let;

	for (line = 1; line <= 10; line++)
	{
		for (let = 'a'; let <= 'z'; let++)
			_putchar(let);

		_putchar('\n');
	}
}
