/**
 * print_name - function that prints a  name
 * @name: name to print
 * @f: pointer to a function that doesn't return anything
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
