#include "main.h"
/**
 * string_toupper - converst lower case string to upper case
 * @str: lower case string
 * Return: Uppercase string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
