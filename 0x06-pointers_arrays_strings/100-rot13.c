#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes string to rot13
 * @s: pointer to string
 * Return: pointer *p
 */
char *rot13(char *s)
{
	int j;
	char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqestuvwxyz";
	char B[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyz";
	char *ptr = s;

	while (*s)
	{
		for (j = 0; j <= 52; j++)
		{
			if (*s == A[j])
			{
				*s = B[j];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
