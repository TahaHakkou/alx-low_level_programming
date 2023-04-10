#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
/**
 * main - copies the content of a file to another file
 * @ac: arguments count
 * @av: arguments vector
 * Return: 0 on Success, exit with error_code on errors
 */
int main(int ac, char **av)
{
	int ffd, ftd;
	char buffer[1024];
	size_t l;

	ffd = open(av[1], O_RDONLY);
	ftd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (ffd < 0)
	{
		l = (size_t)read(ffd, buffer, 1000);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	else if (ftd < 0)
	{
		write(ftd, buffer, l);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	else if ()
	{
		close(ftd);
		close(ffd);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else
		return (0);
}
