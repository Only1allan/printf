#include "main.h"
/**
* _puts - a function that returns a string
* @string: parameter for the _puts function
* Return: string
*/
int _puts(char *string)
{
int string_position;

for (string_position = 0; string[string_position]; string_position++)
{
_putchar(string[string_position]);
}
return (string_position);
}
