#include "main.h"
/**
*read_textfile - a function that hat reads a text file and
*prints it to the POSIX standard output.
*@filename:a pointer variable that points to the file name
*@letters: the number of letters it should read and print
*Return: 0 for erroe and on success the actual number of
*letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
int file_descriptor;
int read_content;
int bytes;
if (filename == NULL)
{
return (0);
}

file_descriptor = open(filename, O_RDONLY);

if (file_descriptor < 0)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
read_content = read(file_descriptor, buffer, letters);


bytes = write(STDOUT_FILENO, buffer, read_content);


if (bytes < 0)
{
return (0);
}
close(file_descriptor);

return (bytes);
}
