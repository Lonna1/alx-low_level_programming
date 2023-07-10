/**
 * _memcpy - function that copies memory area
 *
 * @dest: pointer to the string destination
 * @src: pointer to the string source
 * @n:unsigned integer
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
