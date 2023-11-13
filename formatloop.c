#include "main.h"
/**
 * formatloop - specifies which format specifer we are using
 * @format: the format string.
 * @list: the list of args used.
 * Return: the value of the argument
 */

int formatloop(const char *format, va_list list)
{
	unsigned long int i, len = 0;

	char *str, percent = '%', *res;

	int count = 0;

	char buffer[12];

	for (i = 0; i < strlen(format); i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				write(1, &percent, 1);
				count++;
			}
			else if (format[i + 1] == 'c')
			{
				int c = va_arg(list, int);

				write(1, &c, 1);
				count++;
			}
			else if (format[i + 1] == 's')
			{
				str = va_arg(list, char *);
				len = strlen(str);
				write(1, str, len);
				count += len;
			}
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				int c = va_arg(list, int);

				len = sprintf(buffer, "%d", c);
				write(1, buffer, len);
				count += len;
			}
			else if (format[i + 1] == 'b')
			{
				unsigned int c = va_arg(list, int);

				res = intToBinary(c);
				len = strlen(res);
				write(1, res, len);
				count += len;
			}
			i++;
		}
	}
	return (count);
}
