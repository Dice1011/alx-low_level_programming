#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 * Return: Always 0 (Success)
 */
int main(void)
{
	char PassWord[100];
	int i, sum = 0, Diff1;

	srand(time(0));
	for (i = 0; i < 100; i++)
	{
		PassWord[i] = rand() % 78;
		sum += (PassWord[i] + '0');
		putchar(PassWord[i] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			Diff1 = 2772 - sum - '0';
			sum += Diff1;
			putchar(Diff1 + '0');
			break;
		}
	}
	return (0);
}
