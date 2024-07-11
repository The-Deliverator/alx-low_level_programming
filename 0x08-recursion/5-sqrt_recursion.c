#include "main.h"

/**
 * _sqrt - calculates square root
 * @n: number to calculate square root
 * Return: square root
 */

int _sqrt_recursion(int n)
     {
	if(n<0)
	{
	return(functional_sqrt_recursion(n,0));
	}

/**
 * functional_sqrt_recursion- recursive function
 * @n: number to calculate the square root
 * @a:number to be compared
 * Return: square root
 */

int functional_sqrt_recursion(int n, int a)
{
	if(a*a>n)
	{
	return(-1);
	}
	if (a*a == n)
	{
	return (a);
	}
	return (functional_sqrt_recursion(n,a + 1));
}
}
