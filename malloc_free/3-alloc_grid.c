#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
   int i;
   if ((width <= 0) || (height <= 0))
   return (NULL);
int width[0];
int height[0];

grid = (int**)malloc(height * sizeof(int *));
if (grid == NULL)
return(NULL);

for(i = 0; i < height; i++)
}