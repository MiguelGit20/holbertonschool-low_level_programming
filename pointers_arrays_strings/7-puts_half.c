#include "main.h"
/**
 *puts_half - it prints the half of a string
 *Return: the half of a string
 *@str: array
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{

		i++;
		if (i >= 5)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}