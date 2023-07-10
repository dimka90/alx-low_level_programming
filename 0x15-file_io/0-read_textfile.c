#include "main.h"
/**
*read_textfile - a function that reads text and write it out to the STDOUT"
*@filename:The name of the file to read from
*@letters:size of file to read
*Return:the number of byte read
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
char Buffer[1024];
ssize_t inhandler;
int bytes;
if (filename == NULL)
{

return (0);
}

inhandler = open(filename, O_RDONLY);

if (inhandler == -1)
{
return (0);
}
while (1)
{
bytes = read(inhandler, Buffer, letters);

if (bytes > 0)
{
write(STDOUT_FILENO, Buffer, bytes);
}
else
{
return (0);
}
}
close(inhandler);
return (1);
}
