#include "main.h"

/**
 * _puts - function that cprints a string
 * @str: spointer to the string
 * Return: string and new line
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
