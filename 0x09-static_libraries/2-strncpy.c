/**
 * _strncpy - A function that copies a string
 * @dest: pointer to destination of a string
 * @src: pointer to source of a strig
 * @n: bytes of @src
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
