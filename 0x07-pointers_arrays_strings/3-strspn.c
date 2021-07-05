#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: bytes to be accepted
 * Return: number to bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i, pref;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			pref = 0;
			if (*s == accept[i])
			{
				bytes++;
				pref = 1;
				break;
			}
		}
		if (!pref)
			break;
		s++;
	}
	return (bytes);
}
