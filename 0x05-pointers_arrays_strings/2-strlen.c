#include "main.h"
#include <string.h>

/**
 * _strlen - This function will help to return the length of a string
 * @s: This is a character to be checked
 * Return: this will help to return the lenght of a string
 */

int _strlen(char *s)
{
	int length_of_a_string = 0;

	while (*s++)
	length_of_a_string++;

	return (length_of_a_string);
}
