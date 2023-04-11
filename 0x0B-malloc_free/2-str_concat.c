#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int counter1;
	int  counter2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	counter1 = 0;
	counter2 = 0;
	while (s1[counter1] != '\0')
		counter1++;
	while (s2[counter2] != '\0')
		counter2++;
	newstr = malloc(sizeof(char) * (counter1 + counter2 + 1));

	if (newstr == NULL)
		return (NULL);
	counter1 = 0;
	counter2 = 0;
	while (s1[counter1] != '\0')
	{
		newstr[counter1] = s1[counter1];
		counter1++;
	}

	while (s2[counter2] != '\0')
	{
		newstr[counter1] = s2[counter2];
		counter1++, counter2++;
	}
	newstr[counter1] = '\0';
	return (newstr);
}
