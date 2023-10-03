#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void confirm_elf(unsigned char *e_ident);
void puts_header(Elf64_Ehdr *header);
void scan_header(const char *filename, Elf64_Ehdr *header);
void operate(const char *filename);
void clear(int elf, Elf64_Ehdr *header);
/**
 * confirm_elf - Func to confirm ELF file
 * @e_ident: Ptr to identify
 */
void confirm_elf(unsigned char *e_ident)
{
int u;
for (u = 0; u < 4; u++)
{
if (e_ident[u] != 127 && e_ident[u] != 'E'
&& e_ident[u] != 'L' && e_ident[u] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}
/**
 * puts_header - Func to print header
 * @header: Ptr header
 */
void puts_header(Elf64_Ehdr *header)
{
int u;
printf("ELF Header:\n");
printf(" Magic: ");
for (u = 0; u < EI_NIDENT; u++)
{
printf("%02x", header->e_ident[u]);
if (u == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
printf(" Class: ");
switch (header->e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
}
}
/**
 * scan_header - Function to read the ELF header from a file
 * @filename: Name of the ELF file
 * @header: Pointer to the ELF header structure
 */
void scan_header(const char *filename, Elf64_Ehdr *header)
{
int file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", filename);
exit(98);
}
if (read(file_descriptor, header, sizeof(Elf64_Ehdr)) == -1)
{
close(file_descriptor);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", filename);
exit(98);
}
close(file_descriptor);
}
/**
 * operate - Func to operate
 * @filename: Name of file
 */
void operate(const char *filename)
{
Elf64_Ehdr *header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
dprintf(STDERR_FILENO, "Error: Memory allocation failure\n");
exit(98);
}
scan_header(filename, header);
confirm_elf(header->e_ident);
puts_header(header);
free(header);
}
/**
 * clear - Func to clear
 * @elf: ELF file
 * @header: Ptr to header
 */
void clear(int elf, Elf64_Ehdr *header)
{
close(elf);
free(header);
}
/**
 * main - Main entry
 * @argc: Arg count
 * @argv: Arg vec
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: %s <elf_header>\n", argv[0]);
exit(1);
}
operate(argv[1]);
return (0);
}
