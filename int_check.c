#include "main.h"
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
