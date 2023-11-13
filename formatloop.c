#include "main.h"
/**
 * formatloop - specifies which format specifer we are using
 * @format: the format string.
 * @list: the list of args used.
 * Return: the value of the argument
 */

int formatloop(const char *format, va_list list)
{
	unsigned long int i;
	char percent = '%';
	int count = 0;

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
				count += char_check(list);
			}
			else if (format[i + 1] == 's')
			{
				count += string_check(list);
			}
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				count += int_check(list);
			}
			else if (format[i + 1] == 'b')
			{
				count += binary_check(list);
			}
			i++;
		}
	}
	return (count);
}
