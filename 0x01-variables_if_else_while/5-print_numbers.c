#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting 0.
 *
 * Return: 0.
*/

int main(void)
{
	int num;

	for (num = 0; num <= 10; num++)
		printf("%i", num);
	printf("\n");
	return (0);
}
