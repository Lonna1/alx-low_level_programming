/**
 * _strspn - a function that gets the lenght of a prefix
 * in a string
 * @s: pointer to string to be isnerted
 * @accept: substring prefix to look for in the program
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y, z;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		z = 1;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				z = 0;
				break;
			}
			y++;
		}
		if (z == 1)
			break;
		x++;
	}

	return (x);
}
