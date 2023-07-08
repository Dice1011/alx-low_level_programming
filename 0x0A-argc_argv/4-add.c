#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main -  program that adds positive numbers.
 * @argc: number of arguments
 * @argv: array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, k, sum;
	char *p;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			p = argv[i];
			k = strlen(p);
			for (j = 0; j < argc; j++)
			{
				if (isdigit(*(p + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(agrv[i]);
		}
	printf("%d\n", sum);
	}
	return (0);
}

