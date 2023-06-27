#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 * Return: Always 0 (Success)
 */
int main(void)
{
	char PassWord[84];
	int i = 0, sum = 0, Diff1, Diff2;

	srand(time(0));

	while (sum < 2772)
	{
		PassWord[i] = 33 + rand() % 94;
		sum += PassWord[i++];
	}
	PassWord[i] = '\0';
	if (sum != 2772)
	{
		Diff1 = (sum - 2772) / 2;
		Diff2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
		{
			Diff1++;
		}
		for (i = 0; PassWord[i]; i++)
		{
			if (PassWord[i] >= (33 + Diff1))
			{
				PassWord[i] -= Diff1;
				break;
			}
			for (i = 0; PassWord[i]; i++)
			{
				if (PassWord[i] >= (33 + Diff2))
				{
					PassWord[i] -= Diff2;
					break;
				}
			}
		}
	}
	printf("%s\n", PassWord);
	return (0);
}
