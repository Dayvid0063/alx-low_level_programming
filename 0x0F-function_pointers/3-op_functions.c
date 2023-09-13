#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - Func returns sum of two num
 * @a: First num
 * @b: Second num
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Func returns the difference of two num
 * @a: First number
 * @b: Second number
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - Func returns the product of two num
 * @a: First number
 * @b: Second number
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Func returns the division of two num
 * @a: First number
 * @b: Second number
 *
 * Return: Quotient of a and b
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - Func returns remainder of division of two num
 * @a: First number
 * @b: Second number
 *
 * Return: Remainder of the division of a by b
 */
int op_mod(int a, int b)
{
return (a % b);
}
