#include "main.h"


/**
 * is_palindrome - checks if a string is a palindrome.
 *
 * @s: string to be check.
 *
 * Return: 1 if the string is palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (ispal_checker(s, 0, strlen_rec(s)));

}

/**
 * strlen_rec - returns the string's length
 *
 * @s: The String
 *
 * Return: length of the string.
 */

int strlen_rec(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + strlen_rec(s + 1));

}

/**
  * ispal_checker - recursively checks the characters fetching palindrome
  *
  * @s: The String.
  * @i: String counter
  * @len: String's length.
  *
  * Return: 1 if the string is palindrome and 0 if not
  */

int ispal_checker(char *s, int len, int i)
{
	if (*(s + i) != *(s + len - 1))
		return (0);

	if (i >= len)
		return (1);

	return (ispal_checker(s, i + 1, len - 1));
}


