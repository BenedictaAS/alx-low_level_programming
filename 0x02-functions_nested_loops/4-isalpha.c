#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: the character to be checked.
 *
 * return: 1 if character isa letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && C <= 'z'))
		return (1);
	else
		return (0);
}