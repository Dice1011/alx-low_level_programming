#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of chars in a string
 * Return: concated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ConStr;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	if (n >= j)
		l = i + j;
	else
		l = i + n;

	ConStr = malloc((sizeof(char) * l) + 1);
	if (ConStr == NULL)
		return (NULL);
	j = 0;
	while (k < l)
	{
		if (k <= i)
			ConStr[k] = s1[k];
		if (k >= i)
			ConStr[k] = s2[j];
			j++;
		k++;
	}
	ConStr[k] = '\0';
	return (ConStr);
}
