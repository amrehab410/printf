#include "main.h"
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
