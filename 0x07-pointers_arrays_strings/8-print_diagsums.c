#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, sideA = 0, sideB = 0;

	for (i = 0; i < size; i++)
	{
		sideA += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sideB += a[i];
		a -= size;
	}

	printf("%d, %d\n", sideA, sideB);
}
