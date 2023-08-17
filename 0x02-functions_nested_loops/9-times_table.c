#include "main.h"

/**
 * times_table - prints the 9 times table
 *
*/
void times_table(void)
{
	int num, m, x;

	for (num = 0; num <= 9; num++)
	{
		putchar('0');
		for (m = 1; m <= 9; m++)
		{
			putchar(',');
			putchar(' ');

			x = num * m;

			if (x <= 9)
				putchar(' ');
			else
				putchar((x / 10) + '0');

			putchar((x % 10) + '0');
		}

		putchar('\n');
	}

}
