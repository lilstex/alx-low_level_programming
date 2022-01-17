#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - This is a function that searches for a value in an array of integers
 * @array: Is a pointer to the first element of the array to search in
 * @size: Is the number of elements in array
 * @value: Is the value to search for
 *
 * Return: index where the value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}