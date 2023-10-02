#include "main.h"
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - Program func copies content
 * @argc: Arg count
 * @argv: Arg passed
 *
 * Return: 1 if success,exit if otherwise
 */
int main(int argc, char *argv[])
{
int u, v, w = 1024, x, c_u, c_v;
unsigned int m = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
char n[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s", "Usage: cp file_form file_to\n");
exit(97);
}
u = open(argv[1], O_RDONLY);
check_IO_stat(u, -1, argv[1], 'O');
v = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, m);
check_IO_stat(v, -1, argv[2], 'W');
while (w == 1024)
{
w = read(u, n, sizeof(n));
if (w == -1)
check_IO_stat(-1, -1, argv[1], 'O');
x = write(v, n, w);
if (x == -1)
check_IO_stat(-1, -1, argv[2], 'W');
}
c_u = close(u);
check_IO_stat(c_u, u, NULL, 'C');
c_v = close(v);
check_IO_stat(c_v, v, NULL, 'C');
return (0);
}
/**
 * check_IO_stat - Program func checks files
 * @stat: File opened
 * @filename: Filename
 * @mode: Mode of file
 * @fd: File des.
 *
 * Return: 0
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
if (mode == 'C' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
else if (mode == 'O' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
else if (mode == 'W' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
}
