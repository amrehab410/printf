#include "main.h"
/**
 * intToBinary - converts from decimal to binary
 * @num: the decimal input.
 * Return: the binary value of the argument
 */

char *intToBinary(int num)
{
	int bits[32];
	int index = 0, i, j;
	char *binaryStr;

	if (num == 0)
	{
		binaryStr = (char *)malloc(2 * sizeof(char));

		if (binaryStr == NULL)
		{
			exit(EXIT_FAILURE);
		}
		binaryStr[0] = '0';
		binaryStr[1] = '\0';
		return (binaryStr);
	}

	while (num > 0)
	{
		bits[index++] = num % 2;
		num /= 2;
	}

	binaryStr = (char *)malloc((index + 1) * sizeof(char));

	if (binaryStr == NULL)
	{
		exit(EXIT_FAILURE);
	}

	for (i = index - 1, j = 0; i >= 0; i--, j++)
	{
		binaryStr[j] = bits[i] + '0';
	}

	binaryStr[index] = '\0';
	return (binaryStr);
}

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

/**
 * intToHEX - converts from decimal to HEXADECIMAL
 * @num: the decimal input.
 * Return: the binary value of the argument
 */

char *intToHEX(int num)
{
	char hexDigits[] = "0123456789ABCDEF";
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

/**
 * intToOcta - converts from decimal to octa
 * @num: the decimal input.
 * Return: the octa value of the argument
 */

char *intToOcta(int num)
{
	int OctaDigits[32];
	int index = 0, i, j;
	char *octaStr;

	if (num == 0)
	{
		octaStr = (char *)malloc(2 * sizeof(char));

		if (octaStr == NULL)
		{
			exit(EXIT_FAILURE);
		}
		octaStr[0] = '0';
		octaStr[1] = '\0';
		return (octaStr);
	}

	while (num > 0)
	{
		OctaDigits[index++] = num % 8;
		num /= 8;
	}

	octaStr = (char *)malloc((index + 1) * sizeof(char));

	if (octaStr == NULL)
	{
		exit(EXIT_FAILURE);
	}

	for (i = index - 1, j = 0; i >= 0; i--, j++)
	{
		octaStr[j] = OctaDigits[i] + '0';
	}

	octaStr[index] = '\0';
	return (octaStr);
}

int binaryToDecimal(int binaryNumber)
{
	int decimalNumber = 0, remainder, base = 1;

	while (binaryNumber > 0)
	{
		remainder = binaryNumber % 10;
		decimalNumber += remainder * base;
		binaryNumber /= 10;
		base *= 2;
	}

	return (decimalNumber);
}
