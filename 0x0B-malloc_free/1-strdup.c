#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - return a pointer which contains a copy of string
 *@str: string given as a parameter
 *return: str NULL fail otherwise pointer to the duplicated string success
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(sizeof(char) * sizeof(str));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(str); i++)
	{
		*(ptr + i) = *(str + i);
	}
	return (ptr);
}

