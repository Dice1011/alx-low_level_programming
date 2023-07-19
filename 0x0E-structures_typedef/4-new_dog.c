#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - function gets lenght o a string
 * @str: string
 * Return: string lenght
 */
int _strlen(const char *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}
	return (len);
}
/**
 * _strcpy - makes a copy of the string
 * @src: string to copy
 * @dest: copy of string
 * Return: copied string
 */
char _strcpy(char *dest, char *src)
{
	int i, j = 0;

	while (src[j] != '\0')
	{
		j++;
	}
	for (i = 0; src[i] && i < j; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (*dest);
}
/**
 * new_dog - function creates new dog info
 * @name: name of dog
 * @age: age of dog
 * @owner:dog owner
 * Return: struct pointer dog,null if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner)) + 1);
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	_strcpy(dog->name, name);
	dog->age = age;
	_strcpy(dog->owner, owner);

	return (dog);
}
