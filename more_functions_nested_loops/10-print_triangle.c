#include "main.h"
#include <stdio.h>
/**
 * putchar - writes the character c to stdout
*@c: The character to print
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately
*/
void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
putchar('\n');
return;
}
for (i = 1; i <= size; ++i)
{
    for (j = 1; j > i; ++j)
    {
    _putchar(' ');
    }
    for (k = 0; k < i; ++k)
    _putchar('#');
    _putchar('\n');
}
}