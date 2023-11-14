#include "main.h"
/**
 * hex_string - returns the hexa address of the pointer
 * @ptr: the pointer.
 * Return: the hexa address
 */
char *hex_string(const void *ptr)
{
	size_t i;
	const size_t numBytes = sizeof(void *);
	char *hexString = (char *)malloc(HEX_STRING_SIZE);

	if (ptr == NULL)
	{
		_printf("(null pointer)\n");
		return (NULL);
	}

	if (hexString == NULL)
	{
		return (NULL);
	}
	hexString[0] = '0';
	hexString[1] = 'x';

	for (i = 0; i < numBytes; ++i)
	{
		unsigned char byte = ((unsigned char *)&ptr)[numBytes - 1 - i];

		if (i < 2)
		{
			continue;
		}
		if ((byte >> 4) < 10)
		{
			hexString[i * 2 + 2] = (byte >> 4) + '0';
		}
		else
		{
			hexString[i * 2 + 2] = (byte >> 4) - 10 + 'a';
		}
		if ((byte & 0x0F) < 10)
		{
			hexString[i * 2 + 3] = (byte & 0x0F) + '0';
		}
		else
		{
			hexString[i * 2 + 3] = (byte & 0x0F) - 10 + 'a';
		}
	}

	hexString[HEX_STRING_SIZE - 1] = '\0';

	return (hexString);
}

/**
 * pointer_check - returns the hexa address of the pointer
 * @list: the pointer.
 * Return: the hexa address
 */
int pointer_check(va_list list)
{
	char *res;
	void *c = va_arg(list, void *);
	unsigned long int len;

	res = hex_string(c);
	len = HEX_STRING_SIZE;

	write(1, res, len);
	free(res);
	return (len);
}
