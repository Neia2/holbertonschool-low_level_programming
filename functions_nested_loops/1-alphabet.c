#include "main.h"

/**
*print_alphabet: Write a function that prints alphabet
* Return: 0
*/
void print_alphabet(void)
{
int i;

for (i = 97; i <= 122; i++)
{
putchar(i);
putchar('\n');
}
}
