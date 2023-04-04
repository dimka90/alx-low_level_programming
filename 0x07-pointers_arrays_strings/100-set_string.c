/**
 * set_string - sets the value of a pointer to a char
 * @s: a function parameter that is a store a pointer to pointer
 * @to: pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
