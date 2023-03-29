#include <string.h>
/**
**_strncat- A function that append two strings
*@dest: it stored a pointer to the destination string
*@src: it store a pointer to the source string
*@n: stores the number of byte to append
*Return: A char pointer to the destination string
*/
char *_strncat(char *dest, char *src, int n)
{
int counter;

int des_len;

des_len = strlen(dest);



for (counter = 0; counter < n; counter++)
{

dest[des_len + counter] = src[counter];

}

return (dest);

}
