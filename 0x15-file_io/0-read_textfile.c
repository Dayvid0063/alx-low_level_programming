#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile - func reads text file and print the POSIX stdout
 * @filename: Name of file
 * @letters: Letters to print
 *
 * Return: Actual num of letters it read and print,0 if otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t u;
ssize_t v;
char *r;
int d;
if (filename == NULL)
return (0);
d = open(filename, O_RDONLY);
if (d == -1)
return (0);
r = malloc(sizeof(char) * letters);
u = read(d, r, letters);
close(d);
if (u == -1)
{
free(r);
return (0);
}
v = write(STDOUT_FILENO, r, u);
free(r);
return (v);
}
