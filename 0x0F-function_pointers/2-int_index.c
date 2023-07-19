#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function  that searches for an integer
 * @array: the array in the program
 * @size: pointer to the size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 to show the success of the program
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	bool x;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (index = 0; index < size; index++)
		{
			x = cmp(array[index]);
			if (x == TRUE)
				return (index);
		}
	}

	return (-1);

}
