#include "main.h"
#include <string.h>

int is_palindrome_helper(char *s, int i, int j);

/**
 * is_palindrome - check for palindrome
 * @s: pointer to the string to check
 * Return: returns 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - recursively checks if a string is palindrome
 * @s: pointer to the string
 * @i: current position at the beginning of the string
 * @j: current position at end of the string
 * Return: returns 1 if palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (is_palindrome_helper(s, i + 1, j - 1));
}
