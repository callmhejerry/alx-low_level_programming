
/**
 * set_string - A function that sets the value of a pointer to a char
 * @s:the pointer to the memory that you want to change
 * @to: the pointer to another memory
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
