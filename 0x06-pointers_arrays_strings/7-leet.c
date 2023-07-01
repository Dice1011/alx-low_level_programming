#include "main.h"
/**
 * leet - encodes string into 1337
 * @str: string
 * Return: string
 */
char *leet(char *str)
{
	int i, j;
	char A1[] = "aAeEoOtTLl";
	char B1[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == A1[j])
			{
				str[i] = B1[j];
			}
		}
	}
	return (str);
}
