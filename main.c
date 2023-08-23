#include "simpleshell.h"
/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	char *buff = NULL, *prompt = "$ ";
	size_t buffer_size = 0;
	pid_t pid;

	while (1)
	{
		if (isatty(STDIN_FILENO == 1))
			write(1, prompt, 2);

		ssize_t index = getline(&buff, &buffer_size, stdin);

		if (index == -1)
		{
			perror("unsuccessful");
			free(buff);
			break;
		}
		buff[index - 1] = '\0';
		char *argv[2] = {buff, NULL};

		pid = fork();
		if (pid == 0)
		{
			/*_execve(argv[0], argv, NULL);*/
			perror("problem execuiting command");
			exit(EXIT_FAILURE);
		}
		else if (pid > 0)
		{
			wait(NULL);
		}

		else
		{
			perror("Error forking");
			break;
		}
	}
	return (0);
}
