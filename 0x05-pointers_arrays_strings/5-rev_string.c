#include "main.h"
/**
 * rev_string -reverses a string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	int len = 1, ind = 1;
	char temp;
	
	while (s[ind++])
	{
		len++;
	}
	for (ind = len - 1; ind >= len / 2; ind--)
	{
		temp = s[ind];
		s[ind] = s[len - ind - 1];
		s[len - ind - 1] = temp
	}
}
