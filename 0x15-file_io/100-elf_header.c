#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_elf_header - prints ELF header information
 * @filename: the ELF file to read
 */
void print_elf_header(char *filename)
{
    int fd, i;
    Elf64_Ehdr elf_header;
    char *magic_str;

    /* Open the file for reading */
    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Cannot read file '%s'\n", filename);
        exit(98);
    }

    /* Read the ELF header */
    if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
    {
        dprintf(STDERR_FILENO, "Error: Cannot read ELF header of file '%s'\n", filename);
        exit(98);
    }

    /* Check if the file is an ELF file */
    if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
        elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
        elf_header.e_ident[EI_MAG3] != ELFMAG3)
    {
        dprintf(STDERR_FILENO, "Error: '%s' is not an ELF file\n", filename);
        exit(98);
    }

    /* Print the ELF header information */
    printf("ELF Header:\n");
    printf("  Magic:   ");
    magic_str = (char *)&elf_header.e_ident[0];
    for (i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x ", magic_str[i]);
    }
    printf("\n");

    printf("  Class:                             ");
    switch (elf_header.e_ident[EI_CLASS])
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
        printf("<unknown: %x>\n", elf_header.e_ident[EI_CLASS]);
        break;
    }

    printf("  Data:                              ");
    switch (elf_header.e_ident[EI_DATA])
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
        printf("<unknown: %x>\n", elf_header.e_ident[EI_DATA]);
        break;
    }

    printf("  Version:                           %d", elf_header.e_ident[EI_VERSION]);
