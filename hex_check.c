#include "main.h"
/**
 * hex_check - converts integers to hexadecimal
 * @list: the list of args used.
 * Return: the length of the argument
 */
int hex_check(va_list list)
{
	char *res;
	unsigned int c = va_arg(list, unsigned int);
	unsigned long int len;

	res = intTohex(c);
	len = strlen(res);

	write(1, res, len);
	free(res);
	return (len);
}
