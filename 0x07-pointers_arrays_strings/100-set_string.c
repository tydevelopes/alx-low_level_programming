#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: char pointer to char pointer
 * @to: pointer to string to set s to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
