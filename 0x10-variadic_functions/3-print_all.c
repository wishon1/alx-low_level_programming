#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *print_all - prints anything.
  *@format: list of all arguments passed to the function.
  *
  *Return: void.
  */
void print_all(const char * const format, ...)
{
	unsigned int counter;
	va_list name;

	char *s, *sep;

	va_start(name, format);

	sep = "";

	counter = 0;
	while (format && format[counter])
	{
		switch (format[counter])
		{
			case 'c':
				printf("%s%c", sep, va_arg(name, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(name, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(name, double));
				break;
			case 's':
				s = va_arg(name, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
			default:
				counter++;
				continue;
		}
		sep = ", ";
		counter++;
	}

	printf("\n");
	va_end(name);
}
