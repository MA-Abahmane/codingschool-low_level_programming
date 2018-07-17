#include <stdlib.h>
#include "holberton.h"

/**
 * *_strdup - function with one argument
 * @str: string argument
 *
 * Description: returns a pointer to allocated space in memory
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	ptr = malloc(sizeof(char) * i);
	if (str == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	{
		ptr[j] = str[j];
		j++;
	}
	j++;
	ptr[j] = '\0';
	return (ptr);
}
