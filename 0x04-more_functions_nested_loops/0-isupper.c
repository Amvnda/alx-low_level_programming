#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: takes in a character
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
