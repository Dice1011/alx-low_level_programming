#include "main.h"
/**
 * _strspn - gets the lenght of a prefix substring
 * @s: input
 * @accept: input
 * Return: The number of bytes in initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				i++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (0);
		}
		s++;
	}
	return (0);
}
