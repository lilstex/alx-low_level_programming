#include <stdio.h>
#include "dog.h"

/**
* print_dog - a function that prints a struct dog
* @d: pointer to structure
*/

void print_dog(struct dog *d)
{
if (d == 0)
{
return;
}
if ((*d).name == 0)
{
(*d).name = "(nil)";
}
if ((*d).owner == 0)
{
(*d).owner = "(nil)";
}
printf("Name: %s\n", (*d).name);
printf("Age: %f\n", (*d).age);
printf("Owner: %s\n", (*d).owner);
}
