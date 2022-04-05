#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid-returns a pointer to a 2 dimensional array of integers.
 * @width:width of array
 * @height:height of array
 *
 * Return:pointer to an array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **gridopt;
	int i, j;

	if (width < 1 || height < 1)
	return (NULL);
	gridopt = malloc(height * sizeof(int *));
	if (gridopt == NULL)
	{
	free(gridopt);
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	gridopt = malloc(width * sizeof(int *));
	if (gridopt[i] == NULL)
	{
	for (i--; i >= 0; i--)
	free(gridopt[i]);
	free(gridopt);
	return (NULL);
	}
	}
	for (i = 0; i < height; i++)
	for (j = 0; j < width; j++)
	gridopt[i][j] = 0;
	return (gridopt);
}
