#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Iterates over an index of an array
 * @array: Pointer to the first element of the array
 * @size: Size of the array
 * @cmp: Pointer to the function to be applied to each element
 *
 * Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
	if (cmp(array[i]))
	return (i);
	i++;
	}
return (-1);
}
