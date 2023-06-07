#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the soutraction of two numbers.
 * @a:  first number.
 * @b:  a number.
 *
 * Return: soustraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	return (a / b);
}
int op_mod(int a, int b)
{
	return (a % b);
}

