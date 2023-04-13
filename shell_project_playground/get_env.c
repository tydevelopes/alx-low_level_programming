#include "main.h"

int has_same_key(char *str, const char *substr);
char *get_value(char *str);
unsigned int key_len(char *str);

/**
 * _getenv - gets an environment variable
 * @name: pointer to name of variable
 * Return: pointer to environment variable
 */
char *_getenv(const char *name)
{
	char *value = NULL;
	unsigned int i = 0;

	while (environ[i] != NULL)
	{
		if (has_same_key(environ[i], name))
			value = get_value(environ[i]);
		i++;
	}
	return (value);
}

/**
 * key_len - calculated length of environment variable's key
 * @str: pointer to environment variable
 * Return: length of key
 */
unsigned int key_len(char *str)
{
	unsigned int len = 0;

	while (*str != '=')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * has_same_key - checks if two keys are the same
 * @str: pointer to environment variable
 * @substr: pointer to a key
 * Return: 1 if same, 0 otherwise
 */
int has_same_key(char *str, const char *substr)
{
	unsigned int key_length = 0;
	unsigned int substr_length = (unsigned int)strlen(substr);

	key_length = key_len(str);

	if (key_length != substr_length)
		return (0);

	while (*str != '=')
	{
		if (*str != *substr)
			return (0);
		str++;
		substr++;
	}
	return (1);
}

/**
 * get_value - get a pointer to start of an environment variable's value
 * @str: pointer to environment variable
 * Return: pointer to start of value
 */
char *get_value(char *str)
{
	while (*str != '=')
	{
		str++;
	}
	/* Point to next character after = */
	str++;

	return (str);
}
