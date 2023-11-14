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
				count += percent_check();
			else if (format[i + 1] == 'c')
				count += char_check(list);
			else if (format[i + 1] == 's' || format[i + 1] == 'S')
				count += string_check(list, format[i + 1]);
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
				count += int_check(list);
			else if (format[i + 1] == 'b')
				count += binary_check(list);
			else if (format[i + 1] == 'o')
				count += octal_check(list);
			else if (format[i + 1] == 'u')
				count += unsigned_check(list);
			else if (format[i + 1] == 'X')
				count += HEX_check(list);
			else if (format[i + 1] == 'x')
				count += hex_check(list);
			else if (format[i + 1] == 'p')
				count += pointer_check(list);
			i++;
		}
	}
	return (count);
}
