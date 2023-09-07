#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"
/**
 * is_digit - check str for a non-int char
 * @s: evaluated str
 *
 * Return: 0 if non-int , 1 otherwise
 */
int is_digit(char *s)
{
	int u = 0;

	while (s[u])
	{
		if (s[u] < '0' || s[u] > '9')
			return (0);
		u++;
	}
	return (1);
}
/**
 * _strlen - returned str range
 * @s: evaluated str
 *
 * Return: str range
 */
int _strlen(char *s)
{
	int u = 0;

	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
/**
 * errors - main error
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - two positive num multiplied
 * @argc: number of cases
 * @argv: array of cases
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *u, *v;
	int w, e, n, h, y, t1, t2, *r, b = 0;

	u = argv[1], v = argv[2];
	if (argc != 3 || !is_digit(u) || !is_digit(v))
		errors();
	w = _strlen(u);
	e = _strlen(v);
	n = w + e + 1;
	r = malloc(sizeof(int) * n);
	if (!r)
		return (1);
	for (h = 0; h <= w + e; h++)
		r[h] = 0;
	for (w = w - 1; w >= 0; w--)
	{
		t1 = u[w] - '0';
		y = 0;
		for (e = _strlen(v) - 1; e >= 0; e--)
		{
			t2 = v[e] - '0';
			y += r[w + e + 1] + (t1 * t2);
			r[w + e + 1] = y % 10;
			y /= 10;
		}
		if (y > 0)
			r[w + e + 1] += y;
	}
	for (h = 0; h < n - 1; h++)
	{
		if (r[h])
			b = 1;
		if (b)
			_putchar(r[h] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
