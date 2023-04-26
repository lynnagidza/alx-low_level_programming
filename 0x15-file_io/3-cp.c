#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: array of argument strings
 * Return: 0 on success, other value on failure
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, num_read, num_written;
    char buffer[1024];

    if (argc != 3)
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

    fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fd_to == -1)
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

    while ((num_read = read(fd_from, buffer, 1024)) > 0)
    {
        num_written = write(fd_to, buffer, num_read);
        if (num_written != num_read)
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
    }

    if (num_read == -1)
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

    if (close(fd_from) == -1)
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

    if (close(fd_to) == -1)
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

    return (0);
}
