/**
**leet - 4n 3mc0ding func7ion in 7h3 1337 f0rm47
*@sentence: 4 p0in74r v4rib13 70 s7ring
*
* Return: 4 s7ring p0i7er
*
*/
char *leet(char *sentence)
{
int row;

int column;

char leet_string[] = "aAeEoOtTlL";

char leet_encode[] = "4433007711";

for (row = 0; sentence[row] != '\0'; row++)
{
for (column = 0; column <= 9; column++)
{
	if (sentence[row] == leet_string[column])
	{
	sentence[row] = leet_encode[column];
	}
}

}
return (sentence);
}
