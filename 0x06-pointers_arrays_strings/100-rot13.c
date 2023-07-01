#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes string to rot13
 * @str: pointer to string
 * Return: pointer str
 */
char *rot13(char *str)
{
	int i, j;
	char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqestuvwxyz";
	char B = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyz";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == A[j])
		{
			str[i] = B[j];
			break;
		}
	}
}
return (str);
}
