#include "main.h"
/**
 * string_check - checks for strings
 * @list: the list of args used.
 * Return: the length of the argument
 */
int string_check(va_list list)
{
	char *str = va_arg(list, char *);

	if (str != NULL)
	{
		unsigned long int len = strlen(str);

		write(1, str, len);
		return (len);
	}
	return (0);
}
