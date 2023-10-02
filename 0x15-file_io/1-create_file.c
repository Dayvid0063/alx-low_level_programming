#include "main.h"
/**
 * create_file - func creates a file
 * @filename: Name of file
 * @text_content: Content of texts
 *
 * Return: 1 if success, -1 on fail/NULL
 */
int create_file(const char *filename, char *text_content)
{
int u;
int v;
int w;
if (!filename)
return (-1);
u = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (u == -1)
return (-1);
if (!text_content)
{
for (v = 0; text_content[v];)
v++;
}
w = write(u, text_content, v);
if (w == -1)
return (-1);
close(u);
return (1);
}
