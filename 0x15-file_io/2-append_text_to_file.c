#include "main.h"
/**
 * append_text_to_file - func append text at the end of file
 * @filename: Name of file
 * @text_content: Contents of text
 *
 * Return: 1 if success,-1 if fail/NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
int u;
int v;
int w;
if (!filename)
return (-1);
u = open(filename, O_WRONLY | O_APPEND);
if (u == -1)
return (-1);
if (text_content != NULL)
{
for (v = 0; text_content[v]; v++)
;
w = write(u, text_content, v);
if (w == -1)
return (-1);
}
close(u);
return (1);
}
