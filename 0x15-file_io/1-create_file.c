#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int open, write, length = 0;
	
	if (filename == NULL)
	{
		return (-1);
	}

	if (filename != NULL)
	{
		for (length = 0; text_content[length];)
			len++;
	}

	open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write = write(open, text_content, length);

	if (open == -1 || write == -1)
		return (-1);

	close(open);

	return (1);


}
