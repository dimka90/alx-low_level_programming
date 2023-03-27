/**
*print_rev - Print string in reverse order
*@s: stored the address of the variable to be printed
*/
void print_rev(char *s)
{

int word_count;

int counter;

for (word_count = 0; s[word_count] != '\0'; word_count++)
{

}

for (counter = 0; counter < word_count; counter++)
{
counter = counter - 1;
char temp_letter = s[counter];
s[i] = s[counter];
s[counter] = temp_letter;
}

}
}
