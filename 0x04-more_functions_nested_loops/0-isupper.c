/**
* _isupper - Checking for uppercase letter
* @c: variable to stored letter for checking
*
* Return: 1 for Uppercase and  0 for others
*/
int _isupper(int c)
{
if (c < 65 || c > 90)
{
return (0);

}

return (1);
}
