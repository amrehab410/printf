#include "main.h"
/**
 * HEX_check - converts integers to HEXADECIMAL
 * @list: the list of args used.
 * Return: the length of the argument
 */
int HEX_check(va_list list)
{
	char *res;
	unsigned int c = va_arg(list, unsigned int);
	unsigned long int len;

	res = intToHEX(c);
	len = strlen(res);

	write(1, res, len);
	free(res);
	return (len);
}
