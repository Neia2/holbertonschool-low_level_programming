#include "main.h"

/**
*print_numbers: Write a function that prints the numbers, from 0 to 9.
*
*Return : 0
*/
void print_numbers(void)
{
char numbers;
for (numbers = 48; numbers < 58; numbers++)
_putchar(numbers);
_putchar('\n');
}
