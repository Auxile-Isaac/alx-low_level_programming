#include "main.h"

/**
 * 3-islower.c - prints islower
 *
 * return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
