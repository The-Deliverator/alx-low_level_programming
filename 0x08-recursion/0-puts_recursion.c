#include <stdio.h>
/**
 * _put_recursion - function name
 * @s: parameter of the function
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
	putchar('\n');
	return;
}
putchar(*s);
_puts_recursion(s + 1);
}
