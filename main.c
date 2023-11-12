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
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s][%c]\n", "I am a string !", 'h');
	printf("String:[%s][%c]\n", "I am a string !", 'h');
	_printf("Length:[%d, %i]\n", len, len2);
	return (0);
}
