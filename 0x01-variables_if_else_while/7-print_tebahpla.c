#include <stdio.h>

/**
 * main - prints lowercase alphabet in reberse
 *		using only putchar.
 *
 * Return: 0 (success)
*/

int main(void)
{
	char letter;

		for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
