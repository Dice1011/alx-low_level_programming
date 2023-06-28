#include "main.h"


char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	while (dest[len])
	{
		len++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

