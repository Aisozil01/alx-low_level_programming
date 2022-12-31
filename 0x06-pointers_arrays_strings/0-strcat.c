#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i += 1;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i += 1;
		j += 1;
	}

	dest[i] = '\0';
	return (dest);
}
