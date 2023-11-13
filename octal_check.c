#include "main.h"
/**
 * octal_check - converts integers to Octal
 * @list: the list of args used.
 * Return: the length of the argument
 */
int octal_check(va_list list)
{
	char *res;
	unsigned int c = va_arg(list, unsigned int);
	unsigned long int len;

	res = intToOcta(c);
	len = strlen(res);

	write(1, res, len);
	free(res);
	return (len);
}
