#include "main.h"
/**
 * _print_rev_recursion - function name
 * @s: parameter of the function
 * @s: print the current character after the recursive call
 * putchar('\n'): print a newline character at the end
 * return: a string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
