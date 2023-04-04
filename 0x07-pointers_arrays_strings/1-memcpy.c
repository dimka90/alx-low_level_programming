/**
*_memcpy - A function that copies memory area
*@dest: a pointer to the destination variable
*@src: a pointer variable to copy from
*@n: number of bytes to copy
*
*Return: A pointer to the the destination string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
