#include "main.h"
/**
 * _printf - Entry point
 *
 * Return: Always 0
 */

char *formatloop(char spec, char *str)
{
	switch (spec)
	{
	case 'c':
		char_check(str);
		break;
	case 's':
		string_check(str);
		break;
	case 'd':
		char_check(str);
		break;
	case 'i':
		char_check(str);
		break;

	default:
		break;
	}
}
