/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to character
 * @b: Character variable
 * @n: unsigned integer variable
 * Return: Pointer  @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}
