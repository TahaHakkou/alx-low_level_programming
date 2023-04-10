#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>
#include <stdio.h>

#if defined(__LP64__)
#define ElfW(type) Elf64_ ## type
#else
#define ElfW(type) Elf32_ ## type
#endif

/**
 * main - displays the information contained in the ELF header
 * @ac: arguments count
 * @av: arguments vector
 * Return: ELF Header information on success, exit on failure
 */
int main(int ac, char **av)
{
	int elfd;
	char buffer[];

	ElfW(Ehdr) header;

	if (ac != 2)
		exit(-1);
	elfd = open(av[1], O_RDONLY);
	if (elfd > 0)
	{
		read(av[1], buffer, sizeof(header));
		if (memcmp(header.e_ident, ELFMAG, SELFMAG) == 0)
		{
			printf("ELF Header:\n");
			printf("  Magic: \n");
			printf("  Class: \n");
			printf("  Data: \n");
			printf("  Version: \n");
			printf("  OS/ABI: \n");
			printf("  ABI Version: \n");
			printf("  Type: \n");
			printf("  Entry point address: \n");
		}
		close(elfd);
	}
}
