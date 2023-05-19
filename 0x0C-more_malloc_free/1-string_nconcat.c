#include <stdlib.h>
#include <main.h>
/**
 * *string_nconcat - concatenation of  n bytes of  a string to another 
 * @y1: string to append to
 * @y2: string to concatenate from
 * @n: number of bytes from y2 to concatenate to y1
 */

char *string_nconcat(char *y1, char *y2, unsigned int n)
{
    int y1_len = 0;
    int y2_len = 0;
    int i;
    char *concat;

    if (y1 == NULL)
        y1 = "";
    if (y2 == NULL)
        y2 = "";
    y1_len = strlen(y1);
    y2_len = strlen(y2);

    concat = malloc(sizeof(char) * (y1_len + n + 1));
    if (concat == NULL)
        return (NULL);

    for (i = 0; i < y1_len; i++)
        concat[i] = y1[i];
    for (i = 0; i < n; i++)
        concat[y1_len + i] = y2[i];
    concat[y1_len + n] = '\0';

    return (concat);}

