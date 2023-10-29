#include "main.h"

/**
 * swap_int - Swaps the values of two intergers.
 * @a: First interger
 * @b: Second interger
 * Return: 0
 */

void swap_int(int *a, int *b)
{
		int c = *a;
		*a = *b;
		*b = c;
}
