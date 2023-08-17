#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *		in order separated by a comma followed by a space.
 *
 * @n: input
*/

void print_to_98(int n)
{
	int num;

	if (n < 98)
		for (num = n; num <= 98; num++)
			printf("%d, ", num);
	else
		for (num = n; num >= 98; num--)
			printf("%d, ", num);

	printf("98\n");
}

