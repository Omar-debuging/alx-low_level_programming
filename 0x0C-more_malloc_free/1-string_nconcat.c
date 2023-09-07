#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of s2 to s1
 * @s1: string to append to
 * @s2: string to concatenate
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the final result of string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len0 = 0, len1 = 0;

	while (s1 && s1[len0])
		len0++;
	while (s2 && s2[len1])
		len1++;

	if (n < len1)
		s = malloc(sizeof(char) * (len0 + n + 1));
	else
		s = malloc(sizeof(char) * (len0 + len1 + 1));

	if (!s)
		return (NULL);

	while (i < len0)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < len0 && i < (len0 + n))
		s[i++] = s2[j++];

	while (n >= len1 && i < (len0 + len1))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}

