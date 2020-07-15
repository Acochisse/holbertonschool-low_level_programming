/**
 * print_name - print a name of function
 * @name: pointer to string name
 * @f: function pointer
 *
 * Return: no return
 *
 */

void print_name(char *name, void (*f)(char *))

{
	if (name && f)
		(*f)(name);
}
