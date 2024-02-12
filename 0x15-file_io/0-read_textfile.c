#include "main.h"
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - A fcn that reads text file and prints to the POSIX stdout
 * @filename: A pointer to the file to be read
 * @letters: Number of letters to be read and printed
 * Return: The number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	ssize_t lenread, lenwrite;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_des);
		return (0);
	}
	lenread = read(file_des, buffer, letters);
	close(file_des);
	if (lenread == -1)
	{
		free(buffer);
		return (0);
	}
	lenwrite = write(STDOUT_FILENO, buffer, lenread);
	free(buffer);
	if (lenread != lenwrite)
		return (0);
	return (lenwrite);
}
