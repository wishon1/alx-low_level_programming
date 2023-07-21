#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: pointer to the seperator string.
 * @n: number of arguements
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int counter;

	va_start(arg, n);

	counter = 0;
	while (counter < n)
	{
		printf("%d", va_arg(arg, int));
		counter++;
	}

	if (separator != NULL && counter != n - 1)
	{
	printf("%s", separator);
	}

	printf("\n");

	va_end(arg);
}
