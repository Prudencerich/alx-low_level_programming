#include "main.h"

/**
 * read_textfile - Used to read a txt file and also prints the letter
 *
 * @filename: file_name entry point in the program.
 *
 * @letters: NO. of letters printed in the program.
 *
 * Return: numbers of letters prin. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
