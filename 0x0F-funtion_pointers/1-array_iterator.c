#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element
 * @array:integer array
 * @size:size of the array
 * @action: pointer to funtion
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && actin != NULL && size > 0)
	{
		while (i < size)
		{
			actiion(array[i]);
			i++;
		}
	}
}
