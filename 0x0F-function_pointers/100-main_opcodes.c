#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that  prints its own opcodes
 * @cmd_line_counter: counts number of arguments on the cmd shell
 * @cmd_line_array:stored  array of arguments entered on the cmd sheel
 *
 * Return: Always 0 (Success)
 */
int main(int cmd_line_counter, char *cmd_line_array[])
{
	int counter;

	int data;

	char *ptr_arr;

	if (cmd_line_counter != 2)
	{
		printf("Error\n");
		exit(1);
	}

	data = atoi(cmd_line_array[1]);

	if (data < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr_arr = (char *)main;
	counter = 0;
	while (counter < data)
	{

		if (counter == data - 1)
		{
			printf("%02hhx\n", ptr_arr[counter]);
			break;
		}

	printf("%02hhx ", ptr_arr[counter]);
	counter++;
	}
	return (0);
}
