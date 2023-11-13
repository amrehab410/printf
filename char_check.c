#include "main.h"
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
