#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array
 * Return:Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int j;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		for (j = 0; *argv; j++, argv++)
			;
		printf("%d\n", j - 1);
	}
	return (0);
}

