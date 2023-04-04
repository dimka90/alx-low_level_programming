/**
**_memset - function that fills memory with a constant byte
*@s: variable to be copy to
*@b: variable copied
*@n: number of bytes to copy
*/
char *_memset(char *s, char b, unsigned int n)
{
int counter = 0;

while (counter < n)
{

s[counter] = b;
counter++;
}


return (s);
}
