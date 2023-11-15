#include "main.h"

/**
 *Factorial - name of the function
 *@n: parameter of the function
 *Return: a positive factorial of n
 */

int factorial(int n);
{
	if (n < 0)
		return (-1);
else if (n == 0)
	return (1);
else
	return (n * factorial(n - 1));

}

