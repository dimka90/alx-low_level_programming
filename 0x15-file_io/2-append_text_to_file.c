#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 * If the file does not exist the user lacks write permissions - -1.
 * Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor;
int  bytes;
int length = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (length = 0; text_content[length];)
	length++;
}

file_description = open(filename, O_WRONLY | O_APPEND);
bytes = write(file_description, text_content, length);

if (file_description == -1 || bytes == -1)
return (-1);

close(file_description);

return (1);
}
