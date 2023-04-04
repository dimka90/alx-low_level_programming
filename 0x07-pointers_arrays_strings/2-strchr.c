/**
*_strchr - a function that locates a character in a string.
*@s: a pointer variable that contains string to search for
*@c: a pointer varable for search for in string
*
*Return:NULL for non occurance and a pointer variable for a match
*/
char *_strchr(char *s, char c)
{

int counter;
for (counter = 0; s[counter] >= '\0'; counter++)
{
{
if (s[counter] == c)
return (&s[counter]);
}
}
return (0);
}
