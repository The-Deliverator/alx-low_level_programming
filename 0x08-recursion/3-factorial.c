#include "main.h"

/**
 *Factorial - function parameter
 *@n: parameter of the function
 *Return:function n.
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n <= 0)
	return (1);
	return (n * factorial(n - 1));
}


