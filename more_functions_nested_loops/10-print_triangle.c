#include "main.h"
#include <stdio.h>
/*
*
*
*/
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
putchar('\n');
}
for (i = 1; i <= size; i++)
{
    for (j = 1; j <= i; j--)
    {
    _putchar(' ');
}
{
_putchar('#');
_putchar('\n');
}
}
}