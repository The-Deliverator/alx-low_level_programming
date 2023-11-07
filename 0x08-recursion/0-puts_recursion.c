#include <stdio.h>
/**
 * _puts_recursion - function name
 * This function takes a string as input and uses recursion to print
 * @s: parameter of the function
 */

void _puts_recursion(char *s)
{
if (*s != '\0')
{
	putchar (*s);
	_puts_recursion(s + 1);

}
else
putchar ('\n');
}
