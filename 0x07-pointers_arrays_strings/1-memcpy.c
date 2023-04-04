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
	 int counter;
int counter_2 = n;



	for (counter = 0; counter < counter_2; counter++)
	{
		dest[counter] = src[counter];
		n--;
	}
	return (dest);
}
