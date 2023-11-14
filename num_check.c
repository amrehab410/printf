#include "main.h"
/**
 * binary_check - converts integers to binary
 * @list: the list of args used.
 * Return: the length of the argument
 */
int binary_check(va_list list)
{
	char *res;
	unsigned int c = va_arg(list, unsigned int);
	unsigned long int len;

	res = intToBinary(c);
	len = strlen(res);

	write(1, res, len);
	free(res);
	return (len);
}
/**
 * int_check - checks for integers
 * @args: the list of args used.
 * Return: the length of the argument
 */
int int_check(va_list args)
{
	int n;
	int rem;
	int len;
	unsigned int d;

	n = va_arg(args, int);
	rem = 1;
	len = 0;

	d = n;
	if (n < 0)
	{
		len += _putchar('-');
		d = -d;
	}

	while (d / rem > 9)
		rem *= 10;

	while (rem != 0)
	{
		_putchar('0' + d / rem);
		len++;
		d %= rem;
		rem /= 10;
	}

	return (len);
}

/**
 * octal_check - converts integers to Octal
 * @list: the list of args used.
 * Return: the length of the argument
 */
int octal_check(va_list list)
{
	char *res;
	unsigned int c = va_arg(list, unsigned int);
	unsigned long int len;

	res = intToOcta(c);
	len = strlen(res);

	write(1, res, len);
	free(res);
	return (len);
}
/**
 * unsigned_check - checks for integers
 * @list: the list of args used.
 * Return: the length of the argument
 */
int unsigned_check(va_list list)
{
	char buffer[12];
	int c = va_arg(list, int);

	if (c < 0)
	{
		char *binary = intToBinary(c);
		char *endPtr;
		long int convertedValue = strtol(binary, &endPtr, 2);
		int buffer = ~convertedValue + 1;
		int res = binaryToDecimal(buffer);

		printf("Hexaaaaaaaaaa%d\n", res);
		printf("Binaryyyyyyyy%s\n", binary);
		printf("Decimaaaaaaaaaaaaal%d\n", c);

		/**
		 * unsigned long int len = strlen(res);
		 *
		 *  write(1, buffer, len);
		 * return (len);
		 */
		return (1);
	}
	else
	{

		unsigned long int len = sprintf(buffer, "%d", c);

		write(1, buffer, len);
		return (len);
	}
}
