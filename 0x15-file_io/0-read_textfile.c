#include "main.h"
/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: the name of the file to be read.
* @letters: size of bytes to be read from the file.
* Return: the actual number of letters it could read and print.
*if the file can not be opened or read, return 0.
*if filename is NULL return 0.
*if write fails or does not write the expected amount of bytes, return 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rb, wb;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	rb = read(fd, buffer, letters);
	wb = write(STDOUT_FILENO, buffer, rb);
	if (fd == -1 || rb == -1 || wb == -1 || wb != rb)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	if (close(fd) == -1)
		return (0);
	return (wb);
}
