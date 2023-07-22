#include "calc.h"

/**
 * get_op_function - function to pointer to get operation.
 * @s": operation.
 *
 * Return: return pointer to function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t new;

	new.op = s;
	new.f = NULL;

	while (*new.op == '+' || *new.op == '-' || *new.op == '*'
	|| *new.op == '/' || *new.op == '%')
	{
		new.f = (*new.op == '+') ? &op_add :
			(*new.op == '-') ? &op_sub :
			(*new.op == '*') ? &op_mul :
			(*new.op == '/') ? &op_div :
			(*new.op == '%') ? &op_mod :
			NULL;
}
