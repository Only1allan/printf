#include "main.h"
#include <stdarg.h>
/**
 * _printf - a function that replicated the standard printf functions
 * @format: an argument for the print f function
 * Return: 0 always a success
 */
int _printf(const char *format, ...)
{
        va_list parameters;
        va_start(parameters, format);

        while (*format)
        {
                if (*format == '%')
                {
                        format++;
                        if (*format == 'c')
                        {
                                _putchar(va_arg(parameters, int));
                        }
                        else if (*format == 's')
                        {
                                _puts(va_arg(parameters, char *));
                        }
                        else if (*format == '%')
                        {
                                _putchar(va_arg(parameters, int));
                        }
                        else if (*format == 'd'|| *format == 'i')
                        {
                                _putsdigit(va_arg(parameters, int));
                        }
                        else
                        {
                                _putchar(*format);
                        }
                }
                else
                {
                        _putchar(*format);
                }
                format++;
        }
        va_end(parameters);
        return (0);
}
