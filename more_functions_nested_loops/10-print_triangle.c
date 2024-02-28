#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Write a function that prints a triangle
 * @size: The size of the triangle
 *
 * Return: void
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
    for (j = 1; j < size - i + 1; ++j)
    {
    _putchar(' ');
    }
    for (k = 0; k < i; ++k)
    {
    _putchar('#');
    }
    _putchar('\n');
}
}
