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
