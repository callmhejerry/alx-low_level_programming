#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/**
  * append_text_to_file - A function that appends text
  * at the end of the file
  * @filename: the name of the file
  * @text_content: the content to append to the file
  * Return: 1 if successful, -1 if failed
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_file;

	if (filename == NULL)
		return (-1);
	fd_file = open(filename, O_APPEND | O_WRONLY);
	if (fd_file < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd_file);
		return (1);
	}
	if (write(fd_file, text_content, strlen(text_content)) < 0)
	{
		close(fd_file);
		return (-1);
	}
	close(fd_file);
	return (1);
}
