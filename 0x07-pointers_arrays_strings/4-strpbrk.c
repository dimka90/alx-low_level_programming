/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 * @s: pointer variable that stored the base address of a string
 * @accept: a pointer varible
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int counter;

int counter_2;

		for (counter = 0; s[counter] != '\0'; counter++)
		{
			for (counter_2 = 0; accept[counter_2]; counter_2++)
			{
			if (*s == accept[counter_2])
			return (s);
			}
		}

	return ('\0');
}
