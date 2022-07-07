#include "main.h"
#include <stdio.h>

/**
* _isupper - Check if a letter is upper
* @x: The number to be checked
* Return: 1 for upper letter or 0 for any else
*/
int _isupper(int c)
{
	int upper;
	upper = isupper(c);

	if (upper == 0)
		return 0;
	else
		return 1;
}
