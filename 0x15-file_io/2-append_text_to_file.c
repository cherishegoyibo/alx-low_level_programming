#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */


int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fadd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (-1);

	fadd = fopen(filename, "a");

	if (fadd == NULL)
		return (-1);

	if (text_content != NULL)
		fputs(text_content, fadd);

	fclose(fadd);
	return (1);
}
