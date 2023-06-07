#include "main.h"

/**
 * wildcmp - Compare two strings
 * @y1: The first string to compare
 * @y2: The second string to compare
 * Return: 0
 */

int wildcmp(char *y1, char *y2)
{
	if (*y1 == '\0')
	{
		if (*y2 != '\0' && *y2 == '*')
		{
			return (wildcmp(y1, y2 + 1));
		}
		return (*y2 == '\0');
	}

	if (*y2 == '*')
	{
		return (wildcmp(y1 + 1, y2) || wildcmp(y1, y2 + 1));
	}
	else if (*y1 == *y2)
	{
		return (wildcmp(y1 + 1, y2 + 1));
	}
	return (0);
}

