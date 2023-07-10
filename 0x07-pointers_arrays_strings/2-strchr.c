#include "main.h"
#include <stdio.h>
/**
 * _strchr - function locates a character in a string
 * @s: String to search
 * @c: Character to be found
 * Return: Pointer to the character or null if none found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
