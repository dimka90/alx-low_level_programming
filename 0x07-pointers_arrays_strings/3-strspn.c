/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: A pointer variable that stores input
 * @accept: a pointer that stores a substung vakue
 * Return: length of sub string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

int counter;

int counter_2;

for (counter = 0; s[counter] != '\0'; counter++)
	{
for (counter_2 = 0; accept[counter_2]; counter_2++)
{
if (s[counter] == accept[counter_2])
{
length++;
break;
}
else if (accept[counter_2 + 1] == '\0')
return (length);
}
}
return (length);
}

