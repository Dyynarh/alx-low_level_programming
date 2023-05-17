#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **aee;
	int k, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	aee = malloc(sizeof(int *) * height);

	if (aee == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		aee[k] = malloc(sizeof(int) * width);

		if (aee[k] == NULL)
		{
			for (; k  >= 0; k--)
				free(aee[k]);

			free(aee);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (j = 0; j < width; j++)
			aee[k][j] = 0;
	}

	return (aee);
}
