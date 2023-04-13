#include <stdlib.h>
/**
* *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_stringPtr;

unsigned int i = 0, j = 0;
unsigned int str1_len = 0;
unsigned int str2_len = 0;
for (str1_len = 0; ((s1 != NULL) && (s1[str1_len] != '\0')); )
{
str1_len++;
}
for (str2_len = 0; ((s2 != NULL) && (s2[str2_len] != '\0'));)
{
str2_len++;
}

if (n < str2_len)
{
new_stringPtr = malloc(sizeof(char) * (str1_len + n + 1));
}
else
{
new_stringPtr = malloc(sizeof(char) * (str1_len + str2_len + 1));
}

if (new_stringPtr == NULL)
return (NULL);

for (; i < str1_len; i++)
{
new_stringPtr[i] = s1[i];
}
while (n < str2_len && i < (str1_len + n))

new_stringPtr[i++] = s2[j++];

while (n >= str2_len && i < (str1_len + str2_len))
new_stringPtr[i++] = s2[j++];

new_stringPtr[i] = '\0';
return (new_stringPtr);

}
