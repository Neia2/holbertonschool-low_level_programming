#include "main.h"

/**
*print_numbers:  prints 10 times the numbers, from 0 to 14, followed by a new line.
*
*
*/
void more_numbers(void)
{
int numbers;
int i;

for (i = 0; i < 10; i++)
for (numbers = '0'; numbers <= '14'; numbers++)
{
{
_putchar(numbers);
}
_putchar('\n');
}
}

