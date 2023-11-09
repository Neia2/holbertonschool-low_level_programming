#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array.
* @size: the size of the array.
* @c: The character to be inicialized the array with.
* Return: a pointer to the newly created array;
*/

char *create_array(unsigned int size, char c)
{
		unsigned int i;

		char *charArray;

		if (size == 0)
		{
			return (NULL);
		}

		charArray = malloc(sizeof(char) * size);
		if (charArray == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			charArray[i] = c;
		}
		return (charArray);
}
