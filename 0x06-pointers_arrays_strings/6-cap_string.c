#include "main.h"
/**
 * cap_string - capitalizes all words in a string
 * @str: source string
 * Return: manipulated string
 */
char *cap_string(char *str)
{
	 int i = 0;

	 while (str[i])
	 {
		 while (!(str[i] >= '0' && str[i] <= 'z'))
		 {
			 i++;
		 }
		 if (str[i - 1] == " " ||
		 str[i - 1] == '\t' ||
		 str[i - 1] == '\n' ||
		 str[i - 1] == '.' ||
		 str[i - 1] == ';' ||
		 str[i - 1] == ':' ||
		 str[i - 1] == ',' ||
		 str[i - 1] == '!' ||
		 str[i - 1] == '?' ||
		 str[i - 1] == '*' ||
		 str[i - 1] == '(' ||
		 str[i - 1] == ')' ||
		 str[i - 1] == '{' ||
		 str[i - 1] == '}' ||
		 i == 0)
		 {
			 str[i] -= 32;
			 i++;
		 }
	 }
	 return (str);
}