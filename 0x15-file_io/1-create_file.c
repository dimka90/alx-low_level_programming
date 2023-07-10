#include  "main.h"
/**
*create_file- a function that create a file
*@filename: a pointer vairable for the name of the file
*@text_content: a pointer that contains the word to be written to the file
*Return: 1 on succes and -1 on error
*/

int create_file(const char *filename, char *text_content)
{
int write_byte;
int  file_descriptor;
int str_len;



if (filename == NULL)

{
return (-1);
}
if (text_content == NULL)
{

file_descriptor = open(filename, O_CREAT | O_RDWR, 0600);
close(file_descriptor);
}

for (str_len = 0; text_content[str_len];)
{
str_len++;
}
file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

write_byte = write(file_descriptor, text_content, str_len);
if (file_descriptor == -1 || write_byte == -1)
{
close(file_descriptor);
return (-1);

}
close(file_descriptor);
return (1);
}

