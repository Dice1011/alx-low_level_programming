#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concates all arguments of the program
 * @ac: count
 * @av: vector
 * Return: concated string
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *str;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	while (i < ac)
	{
		while (av[i][j])
		{
			l++;
			j++;
		}
		j = 0;
		i++;
	}
	str = malloc((sizeof(char) * l) + ac + 1);
	i = 0;

	while (av[i])
	{
		while (av[i][j])
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';

		j = 0;
		k++;
		i++;
	}
	k++;
	str[k] = '\0';
	return (str);
}
