#include "main.h"
/**
 * _printf - prints the string given.
 * @format: the string
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	unsigned long int i, len, count = 0;
	char *str, percent = '%';
	int c;
	va_list list;

	va_start(list, format);
	for (i = 0; i < strlen(format); i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				write(1, &percent, 1);
				i++;
				count++;
			}
			else if (format[i + 1] == 'c')
			{
				c = va_arg(list, int);
				write(1, &c, 1);
				i++;
				count++;
			}
			else if (format[i + 1] == 's')
			{
				str = va_arg(list, char *);
				len = strlen(str);
				write(1, str, len);
				i++;
				count += len;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
	}
	va_end(list);
	return (count);
}
