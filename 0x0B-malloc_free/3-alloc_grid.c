#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - using malloc nested loop to make grid
 * @width: vertical width input
 * @height: horinzontal height input
 * Return: two dimensional  array
 */
int **alloc_grid(int width, int height)
{
int vertical;
int horinzontal;
int **ptr;
if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (vertical = 0; vertical < height; vertical++)
	{
		ptr[vertical] = malloc(sizeof(int) * width);

		if (ptr[vertical] == NULL)
		{
			for (; vertical >= 0; vertical--)
				free(ptr[vertical]);
free(ptr);
return (NULL);
		}
	}

for (vertical = 0; vertical < height; vertical++)
{
for (horinzontal = 0; horinzontal < width; horinzontal++)
ptr[vertical][horinzontal] = 0;
	}
return (ptr);
}

