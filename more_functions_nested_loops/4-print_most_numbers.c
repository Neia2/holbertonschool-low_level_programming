#include "main.h"

/**
*print_numbers: Write a function that prints the numbers, from 0 to 9, except 2 & 4.
*
*
*/
void print_most_numbers(void)
{
char numbers;
for (numbers = 48; numbers <= 57; numbers++)
if (numbers != 50 && numbers != 52)
_putchar(numbers);
_putchar('\n');
}
