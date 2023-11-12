#include "main.h"
/**
 * formatloop - specifies which format specifer we are using
 * @spec: the format specifier.
 * @str: the argument used.
 * Return: the value of the argument
 */
/**
 * char *formatloop(char spec, char *str)
 * {
 * 	switch (spec)
 * 	{
 * 	case 'c':
 * 		return (char_check(str));
 *
 * 	 *case 's':
 * 	 *return (string_check(str));
 * 	 *case 'd':
 * 	 *return (dec_check(str));
 * 	 *case 'i':
 * 	 *return (int_check(str));
 *
 * 	default:
 * 		return (NULL);
 * 	}
 * }
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
