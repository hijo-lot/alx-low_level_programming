#include "main.h"

int check_pal(char *y, int i, int len);
int _strlen_recursion(char *y);

/**
 * is_palindrome - Evalutes if a string is a palindrome
 * @y: string to check
 *
 * Return:  1 if the string @y is a palindrome, 0 otherwise.
 */
int is_palindrome(char *y)
{
	if (*y == 0)
		return (1);
	return (check_pal(y, 0, _strlen_recursion(y)));
}

/**
 * _strlen_recursion - Calculates the length of a string using recursion
 *
 * Return: length
 */
int _strlen_recursion(char *y)
{
	if (*y == '\0')
		return (0);
	return (1 + _strlen_recursion(y + 1));
}
int check_pal(char *y, int i, int len)
{
	if (*(y + i) != *(y + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(y, i + 1, len - 1));
}

