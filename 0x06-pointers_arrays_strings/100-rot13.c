/**
*rot13 - encoding using rot13
*@sentence: a pointer string
*Return: a string pointer
*/
char *rot13(char *sentence)
{
int row;

int column;

char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

char map_alphabet[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (row = 0; sentence[row] != 0; row++)
{

for (column = 0; column <= 51; column++)
{
	if (sentence[row] == alphabet[column])
	{
	sentence[row] = map_alphabet[column];
	break;
	}
}

}

return (sentence);
}
