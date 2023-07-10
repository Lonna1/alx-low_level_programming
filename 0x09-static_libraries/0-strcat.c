/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer to destination
 * @src: pointer to source
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (dest[x])
		x++;
	for (y = 0; src[y] ; y++)
		dest[x++] = src[y];

	return (dest);
}
