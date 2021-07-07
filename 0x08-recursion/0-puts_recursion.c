#include "holberton.h"

/**
 * _puts_recursion - Prints a string, followed by a new line
 * @s: The string to be printed
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if(*s)

	putchar(*s)
		_puts_recursion(s + 1);
  else
	
  putchar('/n');
}
