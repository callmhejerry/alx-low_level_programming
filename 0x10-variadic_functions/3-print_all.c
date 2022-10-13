#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - A function that prints anything
 * @format: the list of types of arguments passed to the
 * function
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list ap;
unsigned int i;
char *str;

va_start(ap, format);
i = 0;
while (format[i] != '\0' && format != NULL)
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(ap, int));
i++;
break;
case 'i':
printf("%i", va_arg(ap, int));
i++;
break;
case 'f':
printf("%f", va_arg(ap, double));
i++;
break;
case 's':
str = va_arg(ap, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
i++;
break;
default:
i++;
continue;
}
if (format[i] != '\0')
printf(", ");
}
printf("\n");
va_end(ap);
}
