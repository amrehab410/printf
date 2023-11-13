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

	len = _printf("Length:[%d, %i]\n", 55, 55);
	len2 = printf("Length:[%d, %i]\n", 55, 55);
	printf("Length:[%d, %d]\n", len, len2);
	_printf("Character:[%b]\n", 4);
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s][%c]\n", "I am a string !", 'h');
	printf("String:[%s][%c]\n", "I am a string !", 'h');
	_printf("Length:[%d, %i]\n", len, len2);
	_printf("%b\n", 98);
	return (0);
}
