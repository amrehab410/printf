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
/**
 * char_check - checks for characters
 * @list: the list of args used.
 * Return: the value of the argument
 */
int char_check(va_list list)
{
	int c = va_arg(list, int);

	write(1, &c, 1);
	return (1);
}
