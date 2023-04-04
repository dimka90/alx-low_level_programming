/**
*_memset - function that fills memory with a constant byte
*@s: variable to be copy to
*@b: variable copied
*@n: number of bytes to copy
*Return: a pointer to the destination string
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int counter = 0;

for (counter = 0; counter < n; counter++)
{
s[counter] = b;
}


return (s);
}
