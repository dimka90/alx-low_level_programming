#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * is_num - loops through a n array to check for a number
 * @str: a pointer to an array
 *
 * Return: 0 for not a number and 1 for a number
 */
int is_num(char *str)
{
	/*Declaring variables*/
	unsigned int counter;

	for (counter = 0; counter < strlen(str); counter++)

	{
		if (!isdigit(str[counter]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * cmd_line count:keeps count of cmd line variable -
 * @cmd_line_argument: a pointer to a string
 *
 * Return: 1 for ereor and  0 for Success
*/


int main(int cmd_line_count, char *cmd_line_argument[])
{

	/*Declaring variables*/
	int counter;

	int number;

	int total = 0;

	for (counter = 1; counter < cmd_line_count; counter++)
	{
		if (is_num(cmd_line_argument[counter]))

		{
			number = atoi(cmd_line_argument[count]);
			total += number;
		}

		else
		{
			printf("Error\n");
			return (1);
		}


	}

	printf("%d\n", total);

	return (0);
}






