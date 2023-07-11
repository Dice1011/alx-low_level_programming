#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string and returns a pointer to the copy
 * @str: Pointer to the string
 * Return: Pointer to newly copied string
 */
char *_strdup(char *str)
{
	int i = 0, j = 1;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j])
	{
		j++;
	}
	dup = malloc((sizeof(char) * j) + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	while (i < j)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
