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
		_putchar('0');
		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			x = num * m;

			if (x <= 9)
				_putchar(' ');
			else
				_putchar((x / 10) + '0');

			_putchar((x % 10) + '0');
		}

		_putchar('\n');
	}

}
