#include "main.h"
/**
 * _strspn - gets the lenght of a prefix substring
 * @s: input
 * @accept: input
 * Return: The number of bytes in initial segment of s
 */
unsigned int _strspn(char *s, char *accept)

{
	int i, j;
	int count = 0;
	char *S1, *S2;

	S1 = s;
	S2 = accept;

	i = 0;
	while (S1[i] != '\0')
	{
		j = 0;
		while (S2[j] != '\0')
		{
			if (S2[j] == S1[i])
			{
				count++;
				break;
			}

			j++;
		}

		if (s[i] != accept[j])
		{
			break;
		}

		i++;
	}

	return (count);
}
