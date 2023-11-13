#include "main.h"
/**
 * intTohex - converts from decimal to HEXADECIMAL
 * @num: the decimal input.
 * Return: the binary value of the argument
 */

char *intTohex(int num)
{
	char hexDigits[] = "0123456789abcdef";
	char *hexString;
	int index = 0, reminder = 0, num2;

	if (num == 0)
	{
		hexString = (char *)malloc(sizeof(char) * 2);
		hexString[0] = '0';
		hexString[1] = '\0';
	}
	else
	{
		num2 = num;
		while (num2 != 0)
		{
			num2 /= 16;
			index++;
		}

		hexString = (char *)malloc((index + 1) * sizeof(char));

		if (hexString == NULL)
		{
			exit(EXIT_FAILURE);
		}
		hexString[index] = '\0';
		while (num != 0)
		{
			reminder = num % 16;
			hexString[--index] = hexDigits[reminder];
			num /= 16;
		}
	}
	return (hexString);
}
