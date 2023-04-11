#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
int flag;
int  counter;
int  str_count;

	flag = 0;
	str_count = 0;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		if (s[counter] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			str_count++;
		}
	}

	return (str_count);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
char **ptr, *tmp;
	int counter, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	ptr = (char **) malloc(sizeof(char *) * (words + 1));
	if (ptr == NULL)
		return (NULL);

	for (counter = 0; counter <= len; counter++)
	{
		if (str[counter] == ' ' || str[counter] == '\0')
		{
			if (c)
			{
				end = counter;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				ptr[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = counter;
	}

	ptr[k] = NULL;

	return (ptr);
}

