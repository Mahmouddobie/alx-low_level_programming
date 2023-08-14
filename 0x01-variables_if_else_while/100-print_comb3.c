#include <stdio.h>

/**
 * main - prints all possible combinations of two different digits.
 *	in ascending order, separated by comma followed by a space.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit, digit2;

	for (digit = 0; digit <= 9; digit++)
	{
		for (digit2 = digit + 1; digit2 <= 10; digit2++)
		{
			putchar((digit % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit == 8 && digit2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}

	putchar('\n');
	}
	return (0);
}
