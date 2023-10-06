#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
/**
 * check_elf - Func check if file is an elf file
 * @e_ident: Ptr to an AR.
 *
 * Description: File not elf file - exit code 98
 */
void check_elf(unsigned char *e_ident)
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
 * print_magic - Func print magic num
 * @e_ident: Ptr to an AR
 *
 * Description: Magic num are differenciated
 */
void print_magic(unsigned char *e_ident)
{
int u;
printf(" Magic: ");
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
 * print_class - Func print class
 * @e_ident: Ptr to an AR
 */
void print_class(unsigned char *e_ident)
{
printf(" Class: ");
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
 * print_data - Func print data
 * @e_ident: Ptr to an AR
 */
void print_data(unsigned char *e_ident)
{
printf(" Data: ");
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
 * print_version - Func print version
 * @e_ident: Ptr to an AR
 */
void print_version(unsigned char *e_ident)
{
printf(" Version: %d",
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
 * print_osabi - Func print osabi
 * @e_ident: Ptr to an AR
 */
void print_osabi(unsigned char *e_ident)
{
printf(" OS/ABI: ");
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
