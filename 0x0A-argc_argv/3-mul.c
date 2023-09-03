#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: arguments two numbers
 *
 * Return: return(0) (success)
*/

int main(int argc, char **argv)
{
	int i, mul;

	mul = atoi(argv[1]);
	i = atoi(argv[2]);
	printf("%d\n", mul * i);

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
