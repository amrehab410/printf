#include "main.h"
/**
 * _printf - Entry point
 *
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	int i;
	char *str;
	va_list list;
	va_start(list, format);

	for (i = 0; i < strlen(format); i++)
	{

		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
			}
			else
			{
				str = va_arg(list, char *);
				formatloop(format[i + 1], str);
			}
		}
	}
}

// va_list list;

// va_start(list, n);

// for (i = 0; i < n; i++)
// {
// 	str = va_arg(list, char *);
// 	if (!str)
// 		str = "(nil)";
// 	if (!separator)
// 		printf("%s", str);
// 	else if (separator && i == 0)
// 		printf("%s", str);
// 	else
// 		printf("%s%s", separator, str);
// }

// printf("\n");

// va_end(list);
