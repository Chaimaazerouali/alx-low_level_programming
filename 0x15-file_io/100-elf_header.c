#include "main.h"
/**
* check_elf - Checks if the provided bytes are a valid ELF header.
* @elf_ident: A pointer to an array containing the ELF magic numbers.
*/
void check_elf(unsigned char *elf_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (elf_ident[index] != 127 &&
				elf_ident[index] != 'E' &&
				elf_ident[index] != 'L' &&
				elf_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
* display_magic - Displays the magic numbers(separated by spaces)
* from an ELF header.
* @elf_ident: A pointer to an array containing the ELF magic numbers.
*/
void display_magic(unsigned char *elf_ident)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", elf_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
* display_class - Displays the class information from an ELF header.
* @elf_ident: pointer to an array containing the ELF class.
*/
void display_class(unsigned char *elf_ident)
{
	printf("  Class:                             ");

	switch (elf_ident[EI_CLASS])
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
			printf("<unknown: %x>\n", elf_ident[EI_CLASS]);
	}
}

/**
* display_data - Displays the data encoding from an ELF header.
* @elf_ident: pointer to an array containing the ELF class.
*/
void display_data(unsigned char *elf_ident)
{
	printf("  Data:                              ");

	switch (elf_ident[EI_DATA])
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
			printf("<unknown: %x>\n", elf_ident[EI_CLASS]);
	}
}

/**
* display_version - Displays the version from an ELF header.
* @elf_ident: A pointer to an array containing the ELF version.
*/
void display_version(unsigned char *elf_ident)
{
	printf("  Version:                           %d",
			elf_ident[EI_VERSION]);

	switch (elf_ident[EI_VERSION])
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
* display_osabi - Displays the OS/ABI information from an ELF header.
* @elf_ident: A pointer to an array containing the ELF version.
*/
void display_osabi(unsigned char *elf_ident)
{
	printf("  OS/ABI:                            ");

	switch (elf_ident[EI_OSABI])
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
			printf("<unknown: %x>\n", elf_ident[EI_OSABI]);
	}
}

/**
* display_abi - Displays the ABI version from an ELF header.
* @elf_ident: A pointer to an array containing the ELF ABI version.
*/
void display_abi(unsigned char *elf_ident)
{
	printf("  ABI Version:                       %d\n",
			elf_ident[EI_ABIVERSION]);
}

/**
* display_type - Displays the type information from an ELF header.
*@elf_type: The ELF type.
* @elf_ident: A pointer to an array containing the ELF class.
*/
void display_type(unsigned int elf_type, unsigned char *elf_ident)
{
	if (elf_ident[EI_DATA] == ELFDATA2MSB)
		elf_type >>= 8;

	printf("  Type:                              ");

	switch (elf_type)
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
			printf("<unknown: %x>\n", elf_type);
	}
}

/**
* display_entry - Displays the entry point address from an ELF header.
* @elf_entry: @ of the ELF entry point.
* @elf_ident: Pointer to an array containing the ELF class.
*/
void display_entry(unsigned long int elf_entry, unsigned char *elf_ident)
{
	printf("  Entry point address:               ");

	if (elf_ident[EI_DATA] == ELFDATA2MSB)
	{
		elf_entry = ((elf_entry << 8) & 0xFF00FF00) |
			((elf_entry >> 8) & 0xFF00FF);
		elf_entry = (elf_entry << 16) | (elf_entry >> 16);
	}

	if (elf_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)elf_entry);

	else
		printf("%#lx\n", elf_entry);
}

/**
* close_elf - Closes an ELF file.If the file cannot be closed - exit code 98.
* @e: The file descriptor of the ELF file.
*/
void close_elf(int e)
{
	if (close(e) == -1)
	{
		dprintf(STDERR_FILENO,
				"Errori: Can't close fd %d\n", e);
		exit(98);
	}
}

/**
*main - displays the information contained in the ELF header
*at the start of an ELF file.
*@argc: arg count
*@argv:  array arg
*Return: 0 on success.
*If the file is not an ELF File or, the function fails - exit code 98.
*/
int main(int argc, char *argv[])
{
	int rd, wrt;
	Elf64_Ehdr *header;
	(void)argc;

	wrt = open(argv[1], O_RDONLY);
	if (wrt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(wrt);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(wrt, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		close_elf(wrt);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	display_magic(header->e_ident);
	display_class(header->e_ident);
	display_data(header->e_ident);
	display_version(header->e_ident);
	display_osabi(header->e_ident);
	display_abi(header->e_ident);
	display_type(header->e_type, header->e_ident);
	display_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(wrt);
	return (0);
}
