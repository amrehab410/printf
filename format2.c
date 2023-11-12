#include "main.h"
/**
 * format2 - specifies which format specifer we are using
 * @format: the format string.
 * @list: the list of args used.
 * Return: the value of the argument
 */

unsigned long int format2(char format, va_list list)
{
	unsigned long int len = 0;
	int c, temp, digits = 0;

	if (format == 'd' || format == 'i')
	{
		c = va_arg(list, int);
		char buffer[12];

		len = sprintf(buffer, "%d", c);
		write(1, buffer, len);
	}
	return (len);
}
