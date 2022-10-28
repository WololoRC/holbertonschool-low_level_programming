#include "function_pointers.h"
/**
 *print_name -gives and argument to a function across a function pointer
 *
 *@name: argument
 *@f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
