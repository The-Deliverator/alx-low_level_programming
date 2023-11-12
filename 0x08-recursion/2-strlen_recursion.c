#include "main.h"

/**
 * _strlen_recursion - function that returns length of the string
 * @s: parameter of the function
 * Return: the lenght of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
