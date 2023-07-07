#include "main.h"
#include <stdlib.h>
/**
 * argstostr -a function that splits a string into words
 * @ac: an integer 
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int counter;
int  count;
int  r = 0;
int  l = 0;
char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (counter = 0; counter < ac; counter++)
	{
		for (count = 0; av[counter][count]; count++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (counter = 0; counter < ac; counter++)
	{
	for (n = 0; av[counter][count]; count++)
	{
		str[r] = av[counter][count];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}

