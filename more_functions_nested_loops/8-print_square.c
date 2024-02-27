#include "main.h"

/**
*print_line:  Write a function that draws a straight line in the terminal.
*
*
*/
void print_square(int size)
{
int i;
for (i = 1; i <= 10; i++)
_putchar('#');
_putchar('\n');
if (i <= size)
{
_putchar('#');
_putchar('\n');
_putchar(' ');
}
}