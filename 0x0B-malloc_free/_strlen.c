int  _strenlen(char *string)
{

int counter;

for (counter = 0; string[counter] != '\0'; counter++);

return counter;


}
