#include "main.h"
/**
 * print_chessboard - Entry point chessboard
 * @a: array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
int u;
int h;
for (u = 0; u < 8; u++)
{
for (h = 0; h < 8; h++)
_putchar(a[u][h]);
_putchar('\n');
}
}
