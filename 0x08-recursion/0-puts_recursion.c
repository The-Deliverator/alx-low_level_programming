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
}
putchar(*s);
_puts_recursion(s + 1);
}
int main(void)
{char str[] = "recursion";
	_puts_recursion(str);
	return (0);
}
