#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	a = malloc(sizeof(char) * (len + 1));

	if (a == NULL)
		return (NULL);

	while ((a[i] = str[i]) != '\0')
		i++;

	return (a);
}
