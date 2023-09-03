#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: the number of  argument
 * @argv: array of pointers to arguments
 *
 * Return: return (0) (success)
*/
int main(int argc, char **argv[])
{
	int sum = 0;
	char *ch;

	while (--argc)
	{
		for (ch == argv[argc]; *ch; ch++)
		{
			if (*ch < '0' || *ch > '9')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[argc]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
