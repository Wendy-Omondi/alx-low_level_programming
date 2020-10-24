#include "variadic_functions.h"

/**
 *print_all - prints anything
 *@format: format of datatype to be printed
 */

void print_all(const char * const format, ...)
{
unsigned int i = 0;
char *str, *seperator = "";
va_list arguments;
va_start(arguments, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%f", seperator, va_arg(arguments, double));
case 'i':
printf("%s%f", seperator, va_arg(arguments, double));
case 'f':
printf("%s%f", seperator, va_arg(arguments, double));
break;
case 's':
str = va_arg(arguments, char *);
if (!str)
str = "(nil)";
printf("%s%s", seperator, str);
break;
default:
i++;
continue;
}
seperator = ", ";
i++;
}
}

printf("\n");
va_end(arguments);
}
