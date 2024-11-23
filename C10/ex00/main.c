#include <unistd.h>
#include <fcntl.h>
#include "lib_string.h"
#include "ft_print_file.h"

/**
 * Error messages.
 */
#define NO_ARGS_MSG			"File name missing.\n"
#define TOO_MANY_ARGS_MSG	"Too many arguments.\n"
#define READ_ERROR_MSG		"Cannot read file.\n"

/**
 * Error exit codes
 * (I suppose it's ok to report them as error exit codes and not
 * always return 0 from main(), right?).
 */
#define NO_ARGS			1
#define TOO_MANY_ARGS	2
#define READ_ERROR		3
#define OTHER_IO_FAIL	4

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == NO_ARGS)
	{
		write(STDERR_FILENO, NO_ARGS_MSG, ft_strlen(NO_ARGS_MSG));
		return (NO_ARGS);
	}
	else if (argc > TOO_MANY_ARGS)
	{
		write(STDERR_FILENO, TOO_MANY_ARGS_MSG, ft_strlen(TOO_MANY_ARGS_MSG));
		return (TOO_MANY_ARGS);
	}
	fd = open(*(++argv), O_RDONLY);
	if (fd == -1
		|| ft_print_file(STDOUT_FILENO, fd) == FT_PRINT_FILE_READ_ERROR)
	{
		write(STDERR_FILENO, READ_ERROR_MSG, ft_strlen(READ_ERROR_MSG));
		return (READ_ERROR);
	}
	if (close(fd) == -1)
	{
		return (OTHER_IO_FAIL);
	}
	return (0);
}

#undef OTHER_IO_FAIL
#undef READ_ERROR
#undef TOO_MANY_ARGS
#undef NO_ARGS

#undef READ_ERROR_MSG
#undef TOO_MANY_ARGS_MSG
#undef NO_ARGS_MSG
