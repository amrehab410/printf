#include "main.h"
/**
 * formatloop - specifies which format specifer we are using
 * @format: the format string.
 * @list: the list of args used.
 * Return: the value of the argument
 */

int formatloop(const char *format, va_list list)
{
	unsigned long int i, len;
	char *str, percent = '%';
	int c, count = 0;

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
				char_check(c);
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

	return (count);
}
