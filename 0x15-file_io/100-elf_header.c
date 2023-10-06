#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void view_elf(unsigned char *e_ident);
void magic_number(unsigned char *e_ident);
void puts_class(unsigned char *e_ident);
void display_data(unsigned char *e_ident);
void get_version(unsigned char *e_ident);
void get_abi(unsigned char *e_ident);
void get_osabi(unsigned char *e_ident);
void display_type(unsigned int e_type, unsigned char *e_ident);
void display_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);
/**
 * view_elf - Scans elf file
 * @e_ident: Ptr to array
 *
 * Description: File not ELF - exit code 98
 */
void view_elf(unsigned char *e_ident)
{
int u;
for (u = 0; u < 4; u++)
{
if (e_ident[u] != 127 &&
e_ident[u] != 'E' &&
e_ident[u] != 'L' &&
e_ident[u] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}
/**
 * magic_number - Func print magic num
 * @e_ident: Ptr to array
 *
 * Description: Mgc num
 */
void magic_number(unsigned char *e_ident)
{
int u;
printf("  Magic:   ");
for (u = 0; u < EI_NIDENT; u++)
{
printf("%02x", e_ident[u]);
if (u == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}
/**
 * puts_class - Func print class
 * @e_ident: Ptr to array
 */
void puts_class(unsigned char *e_ident)
{
printf("  Class:                             ");
switch (e_ident[EI_CLASS])
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
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}
/**
 * display_data - Func displays data
 * @e_ident: Ptr to array
 */
void display_data(unsigned char *e_ident)
{
printf("  Data:                              ");
switch (e_ident[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}
/**
 * get_version - Func get version
 * @e_ident: Ptr to array
 */
void get_version(unsigned char *e_ident)
{
printf("  Version:                           %d",
e_ident[EI_VERSION]);
switch (e_ident[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}
/**
 * get_osabi - Func get OS/ABI
 * @e_ident: Ptr to array
 */
void get_osabi(unsigned char *e_ident)
{
printf("  OS/ABI:                            ");
switch (e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}
}
/**
 * get_abi - Func gets abi
 * @e_ident: Ptr to array
 */
void get_abi(unsigned char *e_ident)
{
printf("  ABI Version:                       %d\n",
e_ident[EI_ABIVERSION]);
}
/**
 * display_type - Func display type
 * @e_type: Elf type
 * @e_ident: Ptr to array
 */
void display_type(unsigned int e_type, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
e_type >>= 8;
printf("  Type:                              ");
switch (e_type)
{
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", e_type);
}
}
/**
 * display_entry - Func display entry
 * @e_entry: Elf entry point
 * @e_ident: Ptr to array
 */
void display_entry(unsigned long int e_entry, unsigned char *e_ident)
{
printf("  Entry point address:               ");
if (e_ident[EI_DATA] == ELFDATA2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) |
((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}
if (e_ident[EI_CLASS] == ELFCLASS32)
printf("%#x\n", (unsigned int)e_entry);
else
printf("%#lx\n", e_entry);
}
/**
 * close_elf - Func shuts ELF file
 * @elf: ELF file
 *
 * Description: Cannot be shut - exit code 98
 */
void close_elf(int elf)
{
if (close(elf) == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't close fd %d\n", elf);
exit(98);
}
}
/**
 * main - Main entry
 * @argc: Arguments count
 * @argv: Arguments vec
 *
 * Return: 0 on success
 *
 * Description: File not ELF File or func fails - exit code 98
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
Elf64_Ehdr *header;
int s, v;
s = open(argv[1], O_RDONLY);
if (s == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
close_elf(s);
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
v = read(s, header, sizeof(Elf64_Ehdr));
if (v == -1)
{
free(header);
close_elf(s);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
exit(98);
}
view_elf(header->e_ident);
printf("ELF Header:\n");
magic_number(header->e_ident);
puts_class(header->e_ident);
display_data(header->e_ident);
get_version(header->e_ident);
get_osabi(header->e_ident);
get_abi(header->e_ident);
display_type(header->e_type, header->e_ident);
display_entry(header->e_entry, header->e_ident);
free(header);
close_elf(s);
return (0);
}
