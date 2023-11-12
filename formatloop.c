#include "main.h"
/**
 * formatloop - specifies which format specifer we are using
 * @spec: the format specifier.
 * @str: the argument used.
 * Return: the value of the argument
 */

char *formatloop(char spec, char *str)
{
	switch (spec)
	{
	case 'c':
		return (char_check(str));
	/**
	*case 's':
	*return (string_check(str));
	*case 'd':
	*return (dec_check(str));
	*case 'i':
	*return (int_check(str));
	*/
	default:
		return (NULL);
	}
}
