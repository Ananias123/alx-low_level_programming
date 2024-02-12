#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of file.
 * @filename: Name of the file
 * @text_content: a NULL terminated string to add at the end
 * Return: 1 on success otherwise -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	int letter_Num;
	int read_write;

	if (!filename)
		return (-1);
	file_desc = open(filename, O_WRONLY | O_APPEND);

	if (file_desc == -1)
		return (-1);

	if (text_content)
	{
		for (letter_Num = 0; text_content[letter_Num]; letter_Num++)
			;
		read_write = write(file_desc, text_content, letter_Num);

		if (read_write == -1)
			return (-1);
	}
	close(file_desc);

	return (1);
}
