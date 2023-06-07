#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of a specified size and fills it with a character
 * @size: The size of the array
 * @c: char
 * Description: allocates an array of size @size and fills it with
 * the character @c.
 * Return: A pointer to the created array, or NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

