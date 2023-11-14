#include "main.h"
/**
 * string_check - checks for strings
 * @list: the list of args used.
 * @op: the operator used.
 * Return: the length of the argument
 */
int string_check(va_list list, char op)
{
	char *str = va_arg(list, char *);
	char *res;
	unsigned long int i, len, count = 0;

	if (str == NULL)
		str = "(null)";
	if (str != NULL && op == 's')
	{
		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);
		return (i);
	}
	else if (str != NULL && op == 'S')
	{
		for (i = 0; i < strlen(str); i++)
		{
			if (str[i] >= 32 && str[i] < 127)
			{
				write(1, &str[i], 1);
				count++;
			}
			else
			{
				write(1, "\\x", 2);
				res = intToHEX((int)str[i]);
				len = strlen(res);
				if (len < 2)
				{
					write(1, "0", 1);
					count++;
				}
				write(1, res, len);
				free(res);
				count += len;
			}
		}
		return (count);
	}
	return (-1);
}
/**
 * char_check - checks for characters
 * @list: the list of args used.
 * Return: the value of the argument
 */
int char_check(va_list list)
{
	int c = va_arg(list, int);

	write(1, &c, 1);
	return (1);
}
