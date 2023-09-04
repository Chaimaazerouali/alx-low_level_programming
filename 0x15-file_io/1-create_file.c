#include "main.h"
/**
* create_file - creates a file.
* @filename: the name of the file to create.
* @text_content: pointer to a string to write in the file.
* Return: 1 on success, -1 on failure (file can not be created,
* file can not be written, write “fails”, etc…)
*/
int create_file(const char *filename, char *text_content)
{
	int opr, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	opr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(opr, text_content, length);
	if (opr == -1 || wr == -1)
		return (-1);

	close(opr);

	return (1);
}
