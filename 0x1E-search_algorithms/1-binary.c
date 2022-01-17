#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search - This is a function that searches for a value in a sorted array of integers
 * @array: Is a pointer to the first element of the array to search in
 * @size: Is the number of elements in array
 * @value: Is the value to search for
 *
 * Return: index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t min = 0, max = size - 1, tmp = 0;

	if (array)
	{
		while (min <= max)
		{
			printf("Searching in array: ");
			for (tmp = min; tmp <= max; tmp++)
				printf(tmp != max ? "%d, " : "%d\n",
				       array[tmp]);
			tmp = (max + min) / 2;
			if (array[tmp] > value)
				max = tmp - 1;
			else if (array[tmp] < value)
				min = tmp + 1;
			else
				return (tmp);
		}
	}
	return (-1);
}