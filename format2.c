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
	int i, c;

	if (format == 'd' || format == 'i')
	{
		c = va_arg(list, int);
		i = c;
		do {
			i /= 10;
			len++;
		} while (i != 0);
		write(1, &c, len);
	}
	return (len);
}
