#include <stdio.h>
#include <stdlib.h>
char *create_array(unsigned int size, char c);
void simple_print_buffer(char *buffer, unsigned int size);
char *create_array(unsigned int size, char c)
{
    char *ptr;
    ptr = (char*)malloc(sizeof(char) * size);
    int i =0;
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

