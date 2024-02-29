#include "main.h"
#include <stdio.h>

/**
*print_line:  Write a function that  prints a square, followed by a new line.
*
*
*/
void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
    for (i = 1; i <= size; i++)
{
    for (j = 1; j <= size; j++)
{
    _putchar('#');
}
    _putchar('\n');
}
}
