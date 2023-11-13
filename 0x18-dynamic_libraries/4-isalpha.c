#include "main.h"
/**
 * _isalpha - program check for alphabetic char
 * @c: char being checked
 * Return: 1 if c is a letter, 0 being otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
