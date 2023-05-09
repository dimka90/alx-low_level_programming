#include "main.h"

/**
 * create_file -a function that  Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 * on success 1.
 */
int create_file(const char *filename, char *text_content)
{
int file_descriptor;
int  bytes;
int length;
int file_permission;

if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
for (length = 0; text_content[length];)
{
length++;
}
}
file_permission = 0600;
file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, file_permission);
if (file_descriptor < 0)
{
return (-1);
}
bytes = write(file_descriptor, text_content, length);

if (bytes < 0)
{
return (-1);
}
close(file_descriptor);

return (1);

}