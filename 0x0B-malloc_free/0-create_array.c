#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array of size  and initilize it with char c
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, if the pointer or size are NULL fail
 */

char *create_array(unsigned int size, char c);
char *create_array(unsigned int size, char c)
{
    char *ptr;
    int i;
    ptr = (char*)malloc(sizeof(char) * size);
    if (size == 0 || ptr == NULL)
        {
            return (NULL);
        }

    for (i = 0; i < size; i++)
        {
            *(ptr + i) = c;
        }
    return (ptr);
}

