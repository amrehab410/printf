#include "main.h"
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
