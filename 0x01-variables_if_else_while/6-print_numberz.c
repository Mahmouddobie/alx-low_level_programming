#include <stdio.h>

/**
 * main - prints all numbers bases 10 starting 0
 *	only use putchar and without char variabale.
 *
 * Return: 0 (success)
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
