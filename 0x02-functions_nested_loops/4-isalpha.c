#include "main.h"

/**
 * isalpha - checks for alphabets
 * @c: c is an ascii character
 *
 * Return: 1 if lowercase or upcase
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' or c >= 'A' && c <= 'B')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
