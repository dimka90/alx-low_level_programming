/**
*print_rev - Print string in reverse order
*@s: stored the address of the variable to be printed
*/
void print_rev(char *s)
{
char temp_letter=s[0];

int word_count;

int counter;

for (word_count = 0; s[word_count] != '\0'; word_count++)
{

}

for (counter = 0; counter < word_count; counter++)
{
counter = counter - 1;
temp_letter = s[counter];
s[counter] = s[word_count];
s[word_count] = temp_letter;

_putchar(s[i]);
}

_putchar('\n');
}
