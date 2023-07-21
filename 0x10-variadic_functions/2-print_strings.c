#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: pointer to a charactetr constant.
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print_str;
	unsigned int counter;
	char *str;

	va_start(print_str, n);
	counter = 0;

	while (counter < n)
	{
		str = va_arg(print_str, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && counter != (n - 1))
		{
			printf("%s", separator);
		}
		counter++;
	}
	printf("\n");
}
