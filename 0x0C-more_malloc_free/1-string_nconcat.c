#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1:pointer to the first  string
 * @s2: pointer to the second string
 * @n: unsigned integer
 * Return: NULL or str will be returned
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, x, y;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = l2 = 0;

	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;

	if (n >= l2)
		n = l2;

	str = (char *) malloc((l1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		str[x] = s1[x];

	for (y = 0; y < n && s2[y] != '\0'; y++)
	{
		str[x] = s2[y];
		x++;
	}
	str[x] = '\0';
	return (str);
}
