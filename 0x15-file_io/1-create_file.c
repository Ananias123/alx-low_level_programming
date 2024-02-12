#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: a pointer to the filename
 * @text_content: The content of the file
 * Return: 1 for success, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc;
	int letter_number;
	int read_write;

	if (!filename)
		return (-1);
	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_desc == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letter_number = 0; text_content[letter_number]; letter_number++)
		;
	read_write = write(file_desc, text_content, letter_number);

	if (read_write == -1)
		return (-1);
	close(file_desc);

	return (1);
}
