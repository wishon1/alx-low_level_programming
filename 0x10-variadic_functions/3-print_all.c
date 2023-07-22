#include "variadic_functions.h"

/**
 * ptr_char - function prints char
 * @arg: argument
 */

void ptr_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * ptr_int - function prints int
 * @arg: argument
 */

void ptr_int(va_list arg)
{
	int i = va_arg(arg, int);

	printf("%d", i);
}

/**
 * ptr_float - function prints float
 * @arg: argument
 */

void ptr_float(va_list arg)
{
	float f = va_arg(arg, double);

	printf("%f", f);
}

/**
 * ptr_string - function prints strings.
 * @arg: argument
 */

void ptr_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - function that prints anything.
 * @format: format specifier
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	int i, j;
	char *sep = "";

	print_d data[] = {
		{"c", ptr_char},
		{"i", ptr_int},
		{"f", ptr_float},
		{"s", ptr_string}
	};

	va_start(arg, format);

	i = 0;
	while (format && *(format + i))
	{
		j = 0;
		while (j < 4 && *(format + i) != *(data[j].c))
		{
			j++;
		}

		if (j < 4)
		{
			printf("%s", sep);
			data[j].f_pr(arg);
			sep = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(arg);
}
