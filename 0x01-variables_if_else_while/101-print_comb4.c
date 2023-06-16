#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 indicates the successful of the program
 */

int main(void)
{
        int x, y, z;

        for (x = 0; x <= 9; x++)
        {
                for (y = x + 1; y <= 9; y++)
                {
			for (z = y + 1; z <=9; z++)
			{
                        putchar (x + '0');
                        putchar (y + '0');
			putchar (z + '0');
                        if (x <= 6 || y <= 7 || z <= 8)
                        {
                                putchar (',');
                                        putchar (' ');
                        }
                }
        }

}
        putchar ('\n');

        return (0);

}
