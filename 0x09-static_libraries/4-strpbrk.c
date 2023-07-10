#include "main.h"
/**
 * _strpbrk - function searches a string for any of a set of bytes
 * @s: String
 * @accept: string to be searched
 * Return: Pointer to the bytes in s or null if none
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
