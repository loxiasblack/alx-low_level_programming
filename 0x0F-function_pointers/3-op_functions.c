#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - function that return the sum
 * of a and b
 * @a: first integer
 * @b: second integer
 * Return: sum success;
*/
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
 * op_sub - function that return the difference
 * between a and b
 * @a: first integer
 * @b: second integer
 * Return: difference
*/
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}
/**
 * op_mul - function that mul two integer
 * @a: first integer
 * @b: second integer
 * Return: mul
*/
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}
/**
 * op_div - function that divide two integer
 * @a: first integer
 * @b: divisor
 * Return: a / b
*/
int op_div(int a, int b)
{
	int div;

	div = (a / b);
	return (div);
}
/**
 * op_mod - function that return the module
 * a and b
 * @a: first integer
 * @b: second integer
 * Return: a % b
*/
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
