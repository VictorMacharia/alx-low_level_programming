#include "main.h"
/**
 * void set_string - sets the value of a pointer to a char.
 * @s: Is a pointer to a pointer
 * to: Is the vlue to copy
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
