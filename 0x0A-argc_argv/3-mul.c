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
	int i, j, mul;

	j = atoi(argv[1]);
	i = atoi(argv[2]);
	mul = j * i;
	printf("%d\n", mul);

	if (argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
