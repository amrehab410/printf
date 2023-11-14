#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Length:[%d, %i] String:[%s][%c]  Unsigned octal:[%o]  Unsigned hexadecimal:[%x, %X] \n", 54, 56, "I am a string !", 'h', 3333, '\n', '\n');
	len2 = printf("Length:[%d, %i] String:[%s][%c]  Unsigned octal:[%o]  Unsigned hexadecimal:[%x, %X] \n", 55, 56, "I am a string !", 'h', 3333, '\n', '\n');
	printf("Length:[%d, %d]\n", len, len2);
	_printf("%");
	printf("Character:[%d]\n", '\n');
	_printf("String:[%s][%c]\n", "I am a string !", 'h');
	printf("String:[%s][%c]\n", "I am a string !", 'h');
	_printf("Length:[%d, %i]\n", len, len2);
	_printf("%b\n", -98);
	_printf("Unsigned octal:[%o]\n", 3333);
	printf("Unsigned octal:[%o]\n", 3333);
	_printf("Unsigned:[%u]\n", -53);
	printf("Unsigned:[%u]\n", -53);
	_printf("");
	_printf("Unsigned hexadecimal:[%x, %X]\n", '\n', '\n');
	printf("Unsigned hexadecimal:[%x, %X]\n", '\n', '\n');
	_printf("%S\n", "Best\nSchool");
	return (0);
}
