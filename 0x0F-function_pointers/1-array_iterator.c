#include <stddef.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @array: pointer to the array
 * @size: pointer to the size of the array
 * @action: pointer to function you need to be used
 * Return: empty if Null
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array != NULL && size > 0 && action != NULL)
		for (index = 0; index < size; index++)
			action(array[index]);
}
