#include<stdio.h>

/**
 * main - help to print c program using printf function
 * Return : 0 means the successful of a program
*/

int main()
{
int i;
char c;
long int x;
long long int y;
float z;
	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(i));
	printf("Size of a log int: %lu byte(s)\n",(unsigned long)sizeof(x));
	printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(y));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(z));
	return 0;
}
