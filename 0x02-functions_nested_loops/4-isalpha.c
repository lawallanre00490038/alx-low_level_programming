#include "main.h"

/**
 *_islower - Checks if a character is lowercase
 *@c: the character to be checked
 *
 *Return: 1 if character is lowercase, 0 otherwise
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
