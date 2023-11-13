#include "main.h"
/**
 * binary_check - converts integers to binary
 * @list: the list of args used.
 * Return: the length of the argument
 */
int binary_check(va_list list)
{
	char *res;
	unsigned int c = va_arg(list, unsigned int);
	unsigned long int len;

	res = intToBinary(c);
	len = strlen(res);

	write(1, res, len);
	free(res);
	return (len);
}
