#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes string to rot13
 * @s: pointer to string
 * Return: pointer *s
 */
char *rot13(char *s)
{
	int i, j;
	char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqestuvwxyz";
	char B = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyz";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == A[j])
			{
				s[i] = B[j];
			}
		}
	}
	return (s);
}
