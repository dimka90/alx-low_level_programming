/**
*_strchr - a function that locates a character in a string.
*@s: a pointer variable that contains string to search for
*@c: a pointer varable for search for in string
*
*Return:NULL for non occurance and a pointer variable for a match
*/
char *_strchr(char *s, char c)
{

while (*s != '\0')
{
if (*s == c)
return (c)

s++;

}
return (NULL);
}
