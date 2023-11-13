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
/**
 * int_check - checks for integers
 * @list: the list of args used.
 * Return: the length of the argument
 */
int int_check(va_list list)
{
	char buffer[12];
	int c = va_arg(list, int);
	unsigned long int len = sprintf(buffer, "%d", c);

	write(1, buffer, len);
	return (len);
}
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
/**
 * unsigned_check - checks for integers
 * @list: the list of args used.
 * Return: the length of the argument
 */
int unsigned_check(va_list list)
{
	char buffer[12];
	unsigned int c = va_arg(list, unsigned int);

	unsigned long int len = sprintf(buffer, "%d", c);

	write(1, buffer, len);
	return (len);
}
