#include "main.h"

/**
*print_line:  Write a function that draws a straight line in the terminal.
*
*
*/
void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}


