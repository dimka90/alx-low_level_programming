/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 * @s: pointer variable that stored the base address of a string
 * @accept: a pointer varible
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{

int counter_2;

		while (*s)
		{
			for (counter_2 = 0; accept[counter_2]; counter_2++)
			{
			if (*s == accept[counter_2])
			return (s);
			}
s++;
		}

	return ('\0');
}
