#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * rev_string - reverses the given string
 * @s: pointer to the string to reverse
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i = 0;
	char *temp = (char *)malloc((len + 1) * sizeof(char));

	strcpy(temp, s);

	for (i = 0; i < len; i++)
		s[i] = temp[len - 1 - i];
}
