#include "main.h"
#include <stddef.h>
/*
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:string containing the binary number
 *
 * Return:0 if error or unsigned int number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
		int  a;

		if (b == NULL)
		{
			return (0);

		}

		for (a = 0; b[a] != '\0'; a++)
		{
			if (b[a] != '0' && b[a] != '1')
				return (0);
		}
		for (a = 0; b[a] != '\0'; a++)
		{
			num <<= 1;
			if (b[a] == '1')
				num |= 1;
		}
		return (num);
}
