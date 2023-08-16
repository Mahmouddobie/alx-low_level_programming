#include "main.h"
#include <stdio.h>

/**
 * main - prints _putchar followeing by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{

	char ch[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
		putchar(ch[c]);



	putchar('\n');

	return (0);
}
