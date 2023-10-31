#include "main.h"
/**
 * create_file -  a function that creates a file
 * @filename:the filename
 * @text_content:content writed
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, rwr;
	int nletters;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (nletters = 0; text_content[nletters]; nletters++)
		;
	rwr = write(fd, text_content, nletters);
	if (rwr == -1)
		return (-1);
	close(fd);
	return (1);
}
