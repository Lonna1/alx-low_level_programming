#include <stdlib.h>

/**
 * array_range -funtion that creates an array of integers
 * @min: min number of elements
 * @max: max number of elements
 * Return: array pointer or NULL if it fails
 */

int *array_range(int min, int max)
{
	int x, *array;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
	{
		array[x] = min;
		min++;
	}
	return (array);
}
