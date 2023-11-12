#include "main.h"
/**
 * char_check - check character
 * @str: input character
 * Return: character.
 */

int char_check(int str)
{
	if (sizeof(str) != 1)
	{
		perror("This is not a character!!!!!!!");
		exit(98);
	}
	return (str);
}
