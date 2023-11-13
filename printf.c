#include "main.h"
/**
 * _printf - prints the string given.
 * @format: the string
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	va_list list;
	int count;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(list, format);
	count = formatloop(format, list);
	va_end(list);

	return (count);
}
