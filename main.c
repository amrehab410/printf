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
	void *addr;

	addr = (void *)0x7ffe654841f0;

	len = _printf("Length:[%d, %i]\n", -12345, 36552);
	len2 = printf("Length:[%d, %li]\n", -12345, 361851318165181518);
	_printf("%");
	printf("Character:[%d]\n", '\n');
	_printf("String:[%s][%c]\n", "I am a string !", 'h');
	printf("String:[%s][%c]\n", "I am a string !", 'h');
	_printf("Length:[%d, %i]\n", len, len2);
	printf("Length:[%d, %i]\n", len, len2);
	_printf("%b\n", -98);
	_printf("Unsigned octal:[%o]\n", 3333);
	printf("Unsigned octal:[%o]\n", 3333);
	_printf("Unsigned:[%u]\n", -53);
	printf("Unsigned:[%u]\n", -53);
	_printf("");
	_printf("Unsigned hexadecimal:[%x, %X]\n", '\n', '\n');
	printf("Unsigned hexadecimal:[%x, %X]\n", '\n', '\n');
	_printf("%S\n", "Best\nSchool");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);

	return (0);
}
