#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Iterates over an array and applies a function to each element
 * @array: Pointer to the first element of the array
 * @size: Size of the array
 * @action: Pointer to the function to be applied to each element
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	while (size--)
	{
	action(*array++);
	}
}
