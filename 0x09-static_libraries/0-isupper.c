/**
 * _isupper - checks if a character is uppercase
 *
 * Description: This function checks if the character c is uppercase.
 *
 * @c: The character to be checked.
 *
 * Return: Returns 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

