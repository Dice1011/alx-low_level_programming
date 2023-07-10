#include "main.h"
/**
 * _strstr - function locates a substring
 * @haystack: String
 * @needle: Substring
 * Return: pointer to beginning of substring or 0 if none
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *A = haystack;
		char *B = needle;

		while (*A == *B && *B != '\0')
		{
			A++;
			B++;
		}
		if (*B == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
