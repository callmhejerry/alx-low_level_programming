#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

/**
  * create_file - A function that creates a file
  * @filename: the file to create
  * @text_content: the string or data to write to the file
  * Return: 1 on success , -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd_file, wr;

	if (filename == NULL)
		return (-1);
	fd_file = open(filename, O_WRONLY | O_CREAT | O_EXCL, 0600);
	if (fd_file < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd_file);
		return (1);
	}
	wr = write(fd_file, text_content, strlen(text_content));
	if (wr < 0)
	{
		close(fd_file);
		return (-1);
	}
	close(fd_file);
	return (1);
}
