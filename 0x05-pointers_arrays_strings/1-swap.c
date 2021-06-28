#include "holberton.h"
/**
 * swap_int - swap the values of variables
 * @a: pointer1
 * @b: pointer2
 * Return: void
*/

void swap_int(int *a, int *b)
{
int s = *a;
*a = *b;
*b = s;
}
