#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * op_c - Prints a char.
 * @c: Char to print.
 *
 * Return: always 1
 */
int op_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
 * op_s - Prints a string.
 * @s: String to print.
 *
 * Return: An integer.
 */

int op_s(va_list s)
{
	int index;
	int counter;

	char *str = va_arg(s, char*);

	if (str == NULL)
		str = "(null)";
	for (counter = 0; str[counter] != '\0'; counter++)
		;

	for (index = 0; *(str + index); index++)
		write(1, (str + index), 1);

	return (counter);
}
