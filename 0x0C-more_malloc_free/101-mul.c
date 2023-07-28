#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiplies two positive numbers
 * @num1: first digit
 * @num2: second digit
 * @mul: multiple value
 * Return: integer
 */
int main(int num1, int num2)
{
	int mul;

	if (num1 == '\0' || num2 == '\0')
	{
		printf("Error\n");
		exit(98);
	}
	mul = malloc(sizeof(int) * sizeof(int));
	if (isdigit(num1) && isdigit(num2) && num1 > 0 && num2 > 0)
	{
		mul = (num1 % 10) * (num2 % 10);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
