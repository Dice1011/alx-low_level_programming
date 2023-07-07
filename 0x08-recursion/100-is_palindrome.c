#include "main.h"
#include <stdio.h>

int compare(char *s, int i, int j);
/**
 * _strlen_recursion - find the lenght of a string
 * @s: string
 * Return: string lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 +  _strlen_recursion(s + 1));
	}
}
/**
 * compare - function compares each char in a string
 * @s: string
 * @i: small iterator
 * @j: big iterator
 * Return: Always 0 (Success)
 */
int compare(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
		{
			return (1);
		}
		return (0 + compare(s, i + 1, j - 1));
	}
	return (0);
}
/**
 *is_palindrome - funtion checks a string if its palindrome
 *@s: string
 *Return: 1 if true and 0 if false
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
		return (compare(s, 0, _strlen_recursion(s) - 1));
}
