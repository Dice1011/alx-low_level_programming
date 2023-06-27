#include "main.h"
/**
 * _atoi - converts a string to integer
 * @s: String pointer to be converted
 * Return: void
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int j = 0;
	int m = 1;
	int F = 0;

	while (s[i] == 45)
	{
		if (s[i] == 45)
		{
			m *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			F = 1;
			j = (j * 10) + (s[i] - '0');
			i++;
		}
		if (F == 1)
		{
			break;
		}
		i++;
	}
}
