#include "main.h"

/**
* swap_int - Write a function that swaps the values of two integers.
* @a: swap with b
* @b: swap with a
*/
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
