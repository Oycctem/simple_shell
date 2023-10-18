#include "shell.h"
/**
 * main - entry point
 * @argc: number of command line arg
 * @argv: array of command line str
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	size_t len = BUFFER_SIZE;
	char *name = argv[0], **token;
	char *buffer = malloc(sizeof(char) * BUFFER_SIZE);
	int num_tokens, num_char;

	(void) argc;
	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, "$ ", 2);
		}
		num_char = getline(&buffer, &len, stdin);
		if (num_char == -1)
		{
			free(buffer);
			break;
		}
		token = strbrkdown(buffer, &num_tokens);
		if (!token)
		{
			continue;
		}
		if (handle_builtin_commands(token[0]) == 0)
		{
			free_mem(token, &num_tokens);
			break;
		}
		executer(token, name, &num_tokens, buffer);
	}
	free(buffer);
	return (0);
}
