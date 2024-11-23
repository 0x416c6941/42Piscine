#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft_print_file.h"
#include "lib_string.h"
#include "lib_stdio.h"

/**
 * Error messages.
 */
#define ERROR_PREFIX	"cat"
#define ERROR_COLON		": "

#define NO_PARAMS	1
#define LAST_ARG	0

int	main(int argc, char **argv)
{
	int	fd;

	if (argc <= NO_PARAMS)
	{
		if (ft_print_file(STDOUT_FILENO, STDIN_FILENO))
		{
			ft_perror(ERROR_PREFIX);
			return (errno);
		}
		return (0);
	}
	while (--argc)
	{
		fd = open(*(++argv), O_RDONLY);
		if (fd == -1 || ft_print_file(STDOUT_FILENO, fd) || close(fd) == -1)
		{
			(void) write(STDERR_FILENO, ERROR_PREFIX, ft_strlen(ERROR_PREFIX));
			(void) write(STDERR_FILENO, ERROR_COLON, ft_strlen(ERROR_COLON));
			ft_perror(*argv);
			if ((argc - 1) == LAST_ARG)
				return (1);
		}
	}
	return (0);
}

#undef LAST_ARG
#undef NO_PARAMS

#undef ERROR_COLON
#undef ERROR_PREFIX
