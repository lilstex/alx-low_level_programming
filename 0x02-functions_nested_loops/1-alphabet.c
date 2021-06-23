#include "holberton.h"
/**
 *print alphabet - prints alphabets
 */
void print-alphabet(void)
{
  char a;
  for(a = 'a, a <= 'z', a++)
    {
      _putchar(a);
      _putchar('\n');
    }
}
  