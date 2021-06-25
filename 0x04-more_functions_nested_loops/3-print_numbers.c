#include "holberton.h"

/**
 * print_numbers - Entry point to printing numbers from 0 to 9.
 * Return: Being a void function, we do not expect a return value.
 */

void print_numbers(void)
{
	int num;

	char new_line;

	new_line = '\n';
	num = 0;

	while (num < 10)
	{
		_putchar(num + 48);
		num++;
	}
	_putchar(new_line);

}
