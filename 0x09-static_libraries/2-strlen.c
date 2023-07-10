#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 * Return: length of string
 */

int _strlen(char *s)
{
	int length_of_a_string;

	for (length_of_a_string = 0; *s != '\0'; ++s)
		++length_of_a_string;

	return (length_of_a_string);
}
