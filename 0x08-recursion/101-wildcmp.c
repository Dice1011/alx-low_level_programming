#include "main.h"
/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string which may contain * as a special char
 * Return: 1 if strings are identical, 0 if not
 */
int wildcmp(char*s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	{
		return (0);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else
		return (0);
}
